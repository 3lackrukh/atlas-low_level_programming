#include "main.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be checked.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	return (p - s);
}
