#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc- allocates memory for an array of elements of variable size.
 *
 * @nmemb: the number of elements.
 *
 * @size: the data-type to be allocated for.
 *
 * Return: a pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i = 0;
	char *p;
	size_t totsz;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	totsz = nmemb * size;

	p = (malloc(totsz));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < totsz)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
