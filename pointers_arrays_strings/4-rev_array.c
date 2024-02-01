#include "main.h"
#include <stdlib.h>

/**
 * reverse_array- reverses the content of an array of integers.
 *
 * @a: the array to be reversed.
 *
 * @n: the length of the array.
 *
 * Return: always (0). success.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int k = n;
	int* rev = malloc(n * sizeof(int));

	n--;

	while (i < k)
	{
		rev[n] = a[i];
		i++;
		n--;
	}
	for (i = 0; i < k; i++)
	{
		a[i] = rev[i];
	}
	free(rev);
}
