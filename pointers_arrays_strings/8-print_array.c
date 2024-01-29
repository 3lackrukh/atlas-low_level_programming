#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: the array to be printed.
 *
 * @n: the number of elements within the array.
 *
 * Return: always (0) success.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
