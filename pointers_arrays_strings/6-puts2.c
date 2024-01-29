#include "main.h"

/**
 * puts2- prints every other character of a string,
 * beginning with the first character,
 * ending with a new line.
 *
 * @str: the string to be printed from.
 *
 * Return: always (0) success.
 */

void puts2(char *str)
{

	int i = 0;

	while ((str[i] != '\0') && (i % 2 == 0))
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
