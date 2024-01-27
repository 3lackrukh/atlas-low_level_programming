#include "main.h"

/**
 * reset_to_98- takes a pointer to an int as a parameter,
 * and updates the value of that int to 98.
 *
 * @n: the pointer tken as a parameter.
 *
 * return: always (0). success.
 */

void reset_to_98(int *n)
{
	int *ptr = n;

	*ptr = 98;
}
