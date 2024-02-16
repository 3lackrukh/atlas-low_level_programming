#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range- allocates memory for and populates an array of integers
 * with a specified set of values.
 *
 * @min: the first and lowest integer.
 *
 * @max: the highest integer.
 *
 * Return: a pointer to the array.
 */

int *array_range(int min, int max)
{
	int i;
	int l;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	l = ((max - min) + 1);
	p = malloc(sizeof(int) * l);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		p[i] = (min + i);
	}
	return (p);
}
