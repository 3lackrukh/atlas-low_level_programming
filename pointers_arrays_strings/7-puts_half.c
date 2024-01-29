#include "main.h"

/**
 * puts_half- prints the last half of a string, followed by a new line.
 *
 * @str: the string to be printed from.
 *
 * Return: always (0). success.
 */

void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = length / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
