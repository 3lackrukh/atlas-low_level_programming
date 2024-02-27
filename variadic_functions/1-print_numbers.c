#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints numbers separated by a specified character.
 *
 * @separator: the string to be printed between integers.
 *
 * @n: the number of integers to be printed.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	va_start(nums, n);

	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%d ", va_arg(nums, int));
		}
		else
		{
			printf("%d%s ", va_arg(nums, int), separator);
		}
		i++;
	}
	printf("\n");
	va_end(nums);
}
