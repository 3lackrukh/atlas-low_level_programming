#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int word_count = 0, i = 0, l = 0;
    unsigned long int k;
    char **array = NULL;
    char *buffer;
    char *portion;
    size_t buffsize = 4095;

    buffer = (char *)malloc(sizeof(char) * buffsize);
    if (buffer == NULL)
        return (-1);
    
    getline(&buffer, &buffsize, stdin);
    for (k = 0; k < strlen(buffer); k++)
    {
	    if (buffer[k] == ' ')
		    word_count++;
    }
    word_count++;

    array = (char **)(malloc(sizeof(char *) * word_count + 1));
    if (array == NULL)
    {
	    free(buffer);
	    return (-1);
    }

    portion = strtok(buffer, " ");
    array[i] = strdup(portion);
    if (array[i] == NULL)
    {
	    for (l = 0; l < i; l++)
		    free(array[l]);
	    free(array);
	    free(buffer);
	    return (-1);
    }
    printf("%s\n", portion);
    printf("%s\n", array[i]);
    while (portion != NULL)
    {
        i++;
        portion = strtok(NULL, " ");
      	array[i] = strdup(portion);
	if (array[i] == NULL)
       	{
            for (l = 0; l < i; l++)
                    free(array[l]);
            free(array);
            free(buffer);
            return (-1);
	}
        printf("%s\n", portion);
        printf("%s\n", array[i]);
    }
    printf("%i\n", word_count);
    return (0);
}
