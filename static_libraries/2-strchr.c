#include "main.h"

/**
 * _strchr- locates a specified character in a string.
 *
 * @c: the character to be located.
 *
 * @s: the string to be scanned.
 *
 * Return: if located, the address of the character. if not, NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
