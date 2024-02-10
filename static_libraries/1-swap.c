#include "main.h"

/**
 * swap_int- swaps the values of two integers.
 *
 * @a: first integer to be swapped.
 *
 * @b: second integer to be swapped.
 *
 * return: always (0) success.
 */

void swap_int(int *a, int *b)
{

	int swap = *a;
	*a = *b;
	*b = swap;
}
