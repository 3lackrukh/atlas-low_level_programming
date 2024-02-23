#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index- a function passing an array into the function called
 * and returning the index position of the first true evaluation.
 *
 * @array: pointer to the first element of the array to be evaluated.
 *
 * @size: an integer specifying the size of the array.
 *
 * @cmp: pointer to the function to be called.
 *
 * Return: the array position of the first true evaluation of the
 * array, if there are none or if size is 0 or less, -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (cmp == NULL))
	{
		return ('\0');
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else
		{
			i++;
		}
	}
	return (-1);
}
