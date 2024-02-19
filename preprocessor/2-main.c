#include <stdio.h>

/**
 * main- entry point of the program.
 * prints the name of the file it was compiled from.
 *
 * Return: 0 success.
 */

int main(void)
{
	printf(__BASE_FILE__"\n");
	return (0);
}
