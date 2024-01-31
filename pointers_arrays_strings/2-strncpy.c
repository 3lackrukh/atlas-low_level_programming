#include "main.h"

/**
 * _strncpy- copies a specified portion of a string
 * to the beginning of another string.
 *
 * @dest: the string to be copied to.
 *
 * @src: the string to be copied from.
 *
 * @n: the integer limiting the characters to be copied.
 *
 * Return: the updated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
