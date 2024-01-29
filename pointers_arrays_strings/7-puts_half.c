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

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		_putchar(str[(length /2)]);
