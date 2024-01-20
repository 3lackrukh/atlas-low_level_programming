#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: this program prints out every possible combination
 * of single digits in ascending order, separated by a comma and a space.
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int comb[10][10];
	int a;
	int b;
	int number;

	for (a = 0; a < 10; a++)
{
		for (b = 0; b < 10; b++)
{
			comb[a][b] = a * 10 + b;
}
}
	for (a = 0; a < 10; a++)
{
		for (b = 0; b < 10; b++)
{
			number = comb[a][b];

			putchar('0' + number / 10);
			putchar('0' + number % 10);

			if (b <= 9)
{
				putchar(',');
				putchar(' ');
}
}
}
	return (0);
}
