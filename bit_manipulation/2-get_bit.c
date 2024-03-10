#include "main.h"

/**
 *
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
