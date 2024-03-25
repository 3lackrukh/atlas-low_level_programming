#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char **tokenize(char *buffer, char *delimiter)
{
	int str_ct = 0, i = 0, l = 0;
	unsigned long int k;
	char **array = NULL;
	char *portion;
	
	for (k = 0; k < strlen(buffer); k++)
	{
		if (buffer[k] == ' ')
			str_ct++;
	}
	str_ct++;
	
	array = (char **)malloc(sizeof(char *) * (str_ct + 1));
	if (array == NULL)
	{
		perror("tokenize malloc array failure");
		return (NULL);
	}
	
	portion = strtok(buffer, delimiter);
	while (portion != NULL)
	{
		array[i] = strdup(portion);
		if (array[i] == NULL)
		{
			perror("tokenize strdup array failure]");
			for (l = 0; l < i; l++)
				free(array[l]);
			free(array);
			return (NULL);
		}
		i++;
		portion = strtok(NULL, delimiter);
	}
	array[i] = NULL;
	return (array);
}
int forkcecute(char **cmd_ln) 
{
    pid_t pid;
    char *args[] = {"ls", "-l", "/tmp", NULL};
    char *envp[] = {NULL};

    pid = fork();
    if (pid == -1) {
        perror("fork failed");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
            // Child process
            printf("Child process %d executing ls -l /tmp\n", getpid());
            if (execve("/bin/ls", args, envp) == -1) {
                perror("execve failed");
                exit(EXIT_FAILURE);
            }
            exit(EXIT_SUCCESS);
        } else {
            // Parent process
            // Wait for the child to exit
            wait(NULL);
            printf("Child process %d exited\n", pid);
        }
    return 0;
}
int main ()
{
	char *buffer;
	char **cmd_ln = NULL;
	size_t buffsize = 4095;
	ssize_t bytes_read;

	buffer = (char *)malloc(sizeof(char) * buffsize);
	if (buffer == NULL)
		return (-1);

	while (1)
	{
		printf("$ ");
		bytes_read = getline(&buffer, &buffsize, stdin);
		if (strncmp(buffer, "exit", 4) == 0)
			break;
		cmd_ln = tokenize(buffer, " ");
		forkcecute(cmd_ln[0]
	}
	free(buffer);
	return (0);
}
