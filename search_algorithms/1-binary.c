#include "search_algos.h"

/**
 * binary_search- searches for a value in a sorted array of integers.
 *
 * @array: a pointer to the first element of the array to be searched.
 *
 * @size: the size of the array.
 *
 * @value: the integer to be searched for.
 *
 * Retrun: the index position where value has been located, else -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, high, low = 0;

	mid = (size / 2);
	high = (size - 1);

	if (array == NULL)
		return (-1);

	printf("Searching in array:
	while (value != array[mid] && high > low)
	{
		if (value < array[mid])
			binary_search(*array[low],(mid - 1), value);
		else
			binary_search(*array[mid + 1],(mid - 1), value);
	}
	return (mid);
}
