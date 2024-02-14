#include <stdlib.h>
#include "main.h"

/**
 * _strlen- returns the length of a string.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}

/**
 * str_concat- allocates enough memory to copy two strings
 * and concatenates the two strings, returning a pointer to
 * the new string.
 *
 * @s1: the first string to be copied.
 *
 * @s2: the second string to be copied.
 *
 * Return: if adequate memory is allocated, returns a pointer
 * to the new string, else returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	int k = 0;
	char *scon;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	scon = malloc(sizeof(char) * ((l1 + l2) + 1));
	if (scon == (NULL))
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		scon[i] = s1[i];
	}
	for (k = 0; k < l2; k++)
	{
		scon[i] = s2[k];
		i++;
	}
	scon[i++] = '\0';
	return (scon);
	free(scon);
}
