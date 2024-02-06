#include "main.h"
#include <stdio.h>

/**
* print_diagsums- prints the sum of the two diagonals of a square
* matrix of integers.
*
* @a: the matrix of which the diagonals are to be summed.
*
* @size: the size of the matrix.
*
* Return: nothing.
*/


void print_diagsums(int (*a), int size)
{

	int i;
	int k;
	int sum1 = 0;
	int sum2 = 0;
	int index;

	for (i = 0; i < size; i++)
	{
		index = i * (size + 1);
		sum1 += a[index];
	}
	for (k = (size - 1); k >= 0; k--)
	{
		index = k * size + (size - 1 - k);
		sum2 += a[index];
	}
printf("%d, %d\n", sum1, sum2);
}
