#include "main.h"

/**
 * print_triangle- prints a bottom-heavy, right-justified triangle
 * using the character #.
 *
 * @size: the integer determining the size of the triangle.
 *
 * Return: always (0) success.
 */

void print_triangle(int size)
{
	int i;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (k = size; k >= 0; k--)
		{
			if (k > i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
			_putchar('\n');
	}
}
