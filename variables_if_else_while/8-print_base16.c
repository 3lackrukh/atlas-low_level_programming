#include <stdio.h>

/**
 * main - entry to the program
 * description: this program prints all the numbers of base 16 in lowercase.
 * Return: always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
{
	if (i < 10)
{
		putchar('0' + i);
}
	else
{
		putchar('a' + (i - 10));
}
}
	putchar('\n');

	return (0);
}
