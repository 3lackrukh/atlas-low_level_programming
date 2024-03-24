#include <stdio.h>
#include <string.h>

extern char **environ;

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

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%s\n", get_env(argv[1]));
	else
		printf("No env variable specified.\n");
	return(0);
}
