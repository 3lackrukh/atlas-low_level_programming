#include <stdlib.h>
#include "main.h"

/**
 * free_grid- frees memory space holding a specified 2d grid.
 *
 * @grid: addressof the grid.
 *
 * @height: the height of the grid.
 *
 * Return: nothing. you lose!
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
