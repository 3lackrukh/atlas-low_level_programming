#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: this program uses the putchar command in a for loop
 * to print "_putchar" followed by a new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char var[] = "_putchar";
	int i = 0;

	for (i = 0; var[i] != '\0'; i++)
{
	putchar(var[i]);
}

	putchar('\n');

	return (0);
}
