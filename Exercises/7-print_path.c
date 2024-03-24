#include <stdio.h>
#include <string.h>

extern char **environ;

void print_path(char *path)
{
	char *token;
	if (path != NULL)
	{
		token = strtok(path, ":");
		while (token != NULL)
		{
			printf("%s\n", token);
			token = strtok(NULL, ":");
		}
	}
}

char *get_env(const char *name)
{
	int i = 0;
	size_t length;

	length = strlen(name);
	while (environ[i] != NULL)
	{
		if (strncmp(name, environ[i], length) == 0  && environ[i][length] == '=')
			return(environ[i] + length + 1);
		i++;
	}
	return(NULL);
}

int main()
{
	char *path;

	path = get_env("PATH");
	if (path != NULL)
	{
		print_path(path);
	}
	return(0);
}
