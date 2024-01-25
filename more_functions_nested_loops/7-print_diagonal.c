#include "main.h"

/**
 * print_diagonal- prints diagonal lines in the terminal.
 *
 * @n: the number of times the '\'character should be printed.
 *
 * return: always (0) success.
 */

void print_diagonal(int n)
{
	int i;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (k = i; k > 0; k--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
