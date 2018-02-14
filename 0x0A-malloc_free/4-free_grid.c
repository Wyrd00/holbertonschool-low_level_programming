#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free previously created 2D grid
 * @grid: prev grid
 * @height: height of the grid
 *
 * Return: nada
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || grid == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
