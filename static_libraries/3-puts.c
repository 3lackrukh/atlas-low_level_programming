#include "main.h"

/**
 * _puts- prints a string followed by a newline, to stdout.
 *
 * @str: the string to be printed.
 *
 * Return: always (0). success.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
