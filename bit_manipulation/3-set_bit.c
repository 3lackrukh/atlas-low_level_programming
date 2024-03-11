#include "main.h"

/**
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
	{
		return (-1);
	}
	mask <<= index;
	*n ^= mask;
	return (1);
}
