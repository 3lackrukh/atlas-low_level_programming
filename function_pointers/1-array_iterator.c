#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- a helper function, passing an int array and a
 * size integer into the function called by the calling function.
 *
 * @array: pointer to the int array to be passed along.
 *
 * @size: the size of the array to be passed along.
 *
 * @action: the function to pass this data into.
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
