#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all- checks the data type of each argument passed in
 * and prints anything. 
 *
 * @*:
 */

void prnt_c(va_list ape, char *ptr);
void prnt_i(va_list ape, char *ptr);
void prnt_f(va_list ape, char *ptr);
void prnt_s(va_list ape, char *ptr);


void prnt_c(va_list ape, char *ptr)
{
	char c = va_arg(ape, int);
	printf("%s%c", ptr, c);
}

void prnt_i(va_list ape,char *ptr)
{
	int i = va_arg(ape, int);
	printf("%s%d", ptr, i);
}

void prnt_f(va_list ape, char *ptr)
{
	double f = va_arg(ape, double);
	printf("%s%f", ptr, f);
}

void prnt_s(va_list ape, char *ptr)
{
	char *s = va_arg(ape, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s%s", ptr, s);
}

void print_all(const char * const format, ...)
{
	int i = 0;
	int k;
	va_list ape;
	char *ptr = "";

	typedef struct prnt_a
	{
		char *spec;
		void (*func)(va_list, char*);
	} prnt_a;

	prnt_a prnt_funcs[] = {
		{"c", prnt_c},
		{"i", prnt_i},
		{"f", prnt_f},
		{"s", prnt_s},
		{NULL, NULL},
		};

	va_start(ape, format);

	while (format && format [i])
	{
		k = 0;
		while (prnt_funcs[k].spec != NULL)
		{
			if (strchr(prnt_funcs[k].spec, format[i]) == 0)
			{
				prnt_funcs[k].func(ape, ptr);
				ptr = ", ";
				break;
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(ape);

}
