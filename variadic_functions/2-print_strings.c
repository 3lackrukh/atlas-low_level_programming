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
	char *cur_str;
	char *fin_str;

	va_start(strs, n);

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	while (i < (n - 1))
	{
		cur_str = va_arg(strs, char *);
		if (separator == NULL)
		{
			printf("%s", cur_str);
		}
		else if (cur_str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s%s", cur_str, separator);
		}
		i++;
	}
	fin_str = va_arg(strs, char *);
	if (fin_str == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", fin_str);
	}
	va_end(strs);
}
