#include "main.h"

/**
 * print_square- prints a square composed of the character #
 * followed by a new line.
 *
 * @size: the specified size of the square
 *
 * return: always (0) success.
 */

void print_square(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
}
