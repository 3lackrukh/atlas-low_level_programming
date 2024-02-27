#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings- prints strings separated by an indicated char.
 *
 * @separator: the char to separate strings.
 *
 * @n: the number of strings passed in as arguments.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i = 0;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(strs, n);

	while (i < (n - 1))
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(strs, char *));
		}
		else
		{
			printf("%s%s", va_arg(strs, char *), separator);
		}
		i++;
	}
	printf("%s\n", va_arg(strs, char *));
	va_end(strs);
}
