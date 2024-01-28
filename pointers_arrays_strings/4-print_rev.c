#include "main.h"

/**
 * print_rev- prints a string in reverse, followed by a new line.
 *
 * @s: the string to be printed.
 *
 * Return: always (0). success.
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end > s)
	{
		end--;
		_putchar(*end);
	}

	_putchar('\n');
}
