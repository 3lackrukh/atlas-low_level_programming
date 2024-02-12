#include <stdlib.h>
#include <stdio.h>

/**
 * main- entry point of the program. prints its name followed by a newline.
 *
 * @argc: the number of items in argv.
 *
 *@argv: vector of command line strings, wherin lies the name to be
 * printed.
 *
 * Return: always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
