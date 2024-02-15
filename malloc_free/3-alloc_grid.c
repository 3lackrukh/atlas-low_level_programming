#include <stdlib.h>
#include "main.h"

/**
 * _memset_int- fills a specified amount of memory with a constant int.
 *
 * @s: pointer to the memory area to be filled.
 *
 * @b: the constant int.
 *
 * @n: the amount of memory to be filled.
 *
 * Return: the pointer to filled memory.
 */

int *_memset_int(int *s, int b, size_t n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * alloc_grid- dynamically allocates enough memory for a specified
 * 2d array of integers and initializes each element to 0.
 *
 * @width: the length of each array in the grid.
 *
 * @height: the number of arrays in the grid.
 *
 * Return: a double pointer to 2d grid of allocated memory.
 */

int **alloc_grid(int width, int height)
{
	int i, k;
	int **grid = (int **)malloc(height * sizeof(int *));

	if ((height <= 0) || (width <= 0))
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (k =  0; k < i; k++)
			{
				free(grid[k]);
			}
		free(grid);
		return (NULL);
		}
		_memset_int(grid[i], 0, width);
	}
	return (grid);
}
