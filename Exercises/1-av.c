#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n",  *argv);
		argv++;
	}
	printf("%u\n", argc);
	return (0);
}
