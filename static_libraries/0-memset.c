#include "main.h"

/**
 * _memset- fills a specified amount of memory with a constant byte.
 *
 * @s: pointer to the memory area to be filled.
 *
 * @b: the constant byte.
 *
 * @n: the number of bytes to be filled.
 *
 * Return: the pointer to filled memory.
 */


char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
