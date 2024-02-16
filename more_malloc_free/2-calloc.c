#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	unsigned int *p;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	p = malloc(nmemb * size * sizeof(unsigned int));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
