#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int word_count = 0, i = 0, l = 0;
    unsigned long int k;
    char **array = NULL;
    char *buffer = NULL;
    char *portion;
    size_t buffsize = 4095;

    buffer = (char *)malloc(sizeof(char) * buffsize);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        return -1;
    }

    ssize_t bytes_read = getline(&buffer, &buffsize, stdin);
    if (bytes_read == -1) {
        perror("Error reading input");
        free(buffer);
        return -1;
    }

    for (k = 0; k < strlen(buffer); k++) {
        if (buffer[k] == ' ')
            word_count++;
    }
    word_count++;

    array = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (array == NULL) {
        perror("Memory allocation failed");
        free(buffer);
        return -1;
    }

    portion = strtok(buffer, " \n");
    while (portion != NULL) {
        array[i] = strdup(portion);
        if (array[i] == NULL) {
            perror("Memory allocation failed");
            for (l = 0; l < i; l++)
                free(array[l]);
            free(array);
            free(buffer);
            return -1;
        }
        printf("%s\n", portion);
        printf("%s\n", array[i]);
        i++;
        portion = strtok(NULL, " \n");
    }
    array[i] = NULL;

    printf("%i\n", word_count);

    for (i = 0; i < word_count; i++)
        free(array[i]);
    free(array);
    free(buffer);

    return 0;
}
