#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index.
 *
 * @n: the integer to be checked.
 *
 * @index: the position of the integer's binary representation
 * to be checked.
 *
 * Return: the binary value at the indexed position, or -1 if failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1;

	if (n == 0)
	{
		return (0);
	}

	if (index > 31)
	{
		return (-1);
	}

	mask <<= index;
	if (mask & n)
	{
		return (1);
	}
	else
		return (0);
}
