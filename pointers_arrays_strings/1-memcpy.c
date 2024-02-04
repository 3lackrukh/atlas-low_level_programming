#include "main.h"

/**
 * _memcpy- copies a specified number of bytes from one memory area
 * to another.
 *
 * @n: the number of memory bytes to be copied.
 *
 * @src: the source of memory to be copied from.
 *
 * @dest: the destination to copy memory to.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
