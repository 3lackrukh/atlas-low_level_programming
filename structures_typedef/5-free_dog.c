#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- recieves a pointer to struct type dog_t
 * and frees up allocated memory.
 *
 * @d: the pointer to the block of memory to be freed.
 *
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
