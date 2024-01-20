#include <stdio.h>

/**
 * main - entry to the program
 *
 * Description: This program prints every combinable single-digit number
 * in ascending order, separated by a comma and an empty space.
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar('0' + i);

	if (i < 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');

	return (0);
}
