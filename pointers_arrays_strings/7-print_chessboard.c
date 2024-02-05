#include "main.h"

/**
 * print_chessboard- prints the characters stored in an 8x8
 * two-dimensional array.
 *
 * @a: pointer to the two dimensional array to be printed.
 *
 * Return: nothing.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int k = 0;

	while (i < 8)
	{
		while (k < 8)
		{
			_putchar (a[i][k]);
			k++;
		}
		_putchar ('\n');
		k = 0;
		i++;
	}
}
