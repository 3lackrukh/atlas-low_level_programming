#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked- checks the size of data passed in and
 * allocates sufficient memory using malloc.
 *
 * @b: the data passed in.
 *
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *allocation;

	allocation = malloc(b);

	if (allocation == (NULL))
	{
		exit(98);
	}
	return (allocation);
}
