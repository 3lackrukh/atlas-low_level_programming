#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

typedef struct cmd_args
{
	char *cmd;
	char **args;
} cmd_args;

cmd_args tokenize(char *buffer, char *delimiter)
{
	cmd_args result = {NULL, NULL};
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
		return (result);
	}
	
	portion = strtok(buffer, delimiter);
	result.cmd = strdup(portion);
	if (result.cmd == NULL)
	{
		perror("Tokenize strdup cmd failure");
		free(array);
		return (result);
	}
	i++;
	portion = strtok(NULL, delimiter);
	while (portion != NULL)
	{
		array[i] = strdup(portion);
		if (array[i] == NULL)
		{
			perror("tokenize strdup array failure]");
			for (l = 0; l < i; l++)
				free(array[l]);
			free(array);
			free(result.cmd);
			return (result);
		}
		i++;
		portion = strtok(NULL, delimiter);
	}
	array[i] = NULL;
	result.args = array;
	return (result);
}
int forkcecute(cmd_args cmd_ln) 
{
	pid_t pid;
	char *envp[] = {NULL};

	/* Check for empty arg array */
	if (cmd_ln.cmd == NULL) /*|| cmd_ln->args == NULL)*/
	{
		perror("forkcecute cmd_ln empty");
		return (-1);
	}
	
	pid = fork();
	if (pid == -1)
	{
		perror("fork failed");
		return (-1);
	}
	else if (pid == 0)
	{
		/* Child process */
		printf("Child process %d executing %s\n", getpid(),cmd_ln.cmd);
		if (execve(cmd_ln.cmd, cmd_ln.args, envp) == -1)
		{
			perror("execve failed");
			exit(EXIT_FAILURE);
		}
		exit(EXIT_SUCCESS);
        }
	else
	{
		/* Parent process */
		/* Wait for the child to exit */
		wait(NULL);
		printf("Child process %d exited\n", pid);
	}
	return 0;
}

int main ()
{
	char *buffer;
	cmd_args cmd_ln = {NULL, NULL};
	size_t buffsize = 4095;
	ssize_t bytes_read;

	buffer = (char *)malloc(sizeof(char) * buffsize);
	if (buffer == NULL)
		return (-1);

	while (1)
	{
		printf("$ ");
		bytes_read = getline(&buffer, &buffsize, stdin);
		if (bytes_read == 1)
			continue;
		if (strncmp(buffer, "exit", 4) == 0)
			break;
		cmd_ln = tokenize(buffer, " ");
		forkcecute(cmd_ln);
	}
	free(buffer);
	return (0);
}
