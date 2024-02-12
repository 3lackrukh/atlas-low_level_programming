#include <stdlib.h>
#include <stdio.h>
/**
 * main- entry point of the program. prints the number of arguments
 * passed into it.
 *
 * @argc: the number of items in argv.
 *
 *@argv: vector of command line strings passed in.
 *
 * Return: always 0 (success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
