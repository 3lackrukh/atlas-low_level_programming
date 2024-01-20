#include <stdio.h>

/**
 * main - entry to the program
 * Description: this program prints the single digit numbers of base 10.
 * Return: always 0 (Success)
 */

int main(void)

{
	int i;
	char num[10];

	for (i = 0; i < 10; i++)
{
		putchar('0' + i);
}

	putchar('\n');

	return (0);
}
