#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char *buffer;
	size_t buffsize = 4095;

	buffer = (char *)malloc(sizeof(char) * buffsize);
	if (buffer == NULL)
		return (-1);

	printf("$ ");
	getline(&buffer, &buffsize, stdin);
	printf("%s", buffer);
	return (0);
}
