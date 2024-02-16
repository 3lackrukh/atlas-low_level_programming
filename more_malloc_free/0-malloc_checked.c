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
	size_t size = sizeof(b);
	void *allocation = malloc(size * b);

	if (allocation == (NULL))
	{
		exit(98);
	}
	return (allocation);
}
