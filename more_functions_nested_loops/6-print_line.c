#include "main.h"

/**
 * print_line- draws a straight line in the terminal
 *
 * @n: the number of times the _ should be printed.
 *
 * return: always (0) success.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
