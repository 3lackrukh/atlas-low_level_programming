#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of integers.
 *
 * @array: pointer to the array to be searched.
 *
 * @size: the size of the array.
 *
 * @value: the integer being searched for.
 *
 * Return: the array position of the intger if found. else -1.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
