#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - pointer to 2D array of integers
 * @width: int in horizontal
 * @height: int in vertical
 *
 * Return: 2D array of ints, or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr2D;
	int i, j;

	arr2D = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr2D[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
			arr2D[i][j] = 0;
	}
	return (arr2D);
}
