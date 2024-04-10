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

	high = (size - 1);

	if (array == NULL)
		return (-1);

	while (high >= low)
	{
		printf("Searching in array: ");
		print_array(&array[low], (high - low + 1));
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
        size_t i;

        i = 0;
        while (array && i < size)
        {
                if (i > 0)
                        printf(", ");
                printf("%d", array[i]);
                ++i;
        }
        printf("\n");
}
