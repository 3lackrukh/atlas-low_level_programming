#include "main.h"

/**
 * _strlen_recursion- returns the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	static int i = 1;

	if (*s != '\0')
	{
		s++;
		i++;
		_strlen_recursion(s);
	}
return (i - 1);
}
