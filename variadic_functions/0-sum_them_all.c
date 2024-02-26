#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all its parameters.
 *
 * @n: the number of arguments to follow.
 *
 * Return: the integer sum of the arguments passed in.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ape;
	unsigned int i = 0;
	int sum = 0;

	va_start(ape, n);

	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		sum += va_arg(ape, int);
		i++;
	}
	va_end(ape);
	return (sum);
}
