#include "main.h"
#include <unistd.h>

/**
 * print_binary- prints the binary representation of a number.
 *
 * @n: the integer to be printed in binary.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	int p = 0;
	int i;
	unsigned long int mask = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask--;
	mask = (mask << 63);

	for (i = 0; i < 63; i++)
	{
		mask = (mask >> 1);
		if (mask & n)
		{
			_putchar('1');
			p = 1;
		}
		else
		{
			if (p)
				_putchar('0');
		}
	}
}
