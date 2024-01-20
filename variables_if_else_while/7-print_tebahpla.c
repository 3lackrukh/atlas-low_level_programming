#include <stdio.h>

/**
 * main - entry to the program
 * Description: This program prints the alphabet in reverse order
 * using the putchar function.
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
{
		putchar('a' + i);
}

	putchar('\n');

	return (0);
}
