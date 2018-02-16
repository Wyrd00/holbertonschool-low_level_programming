#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integer
 * @min: min range
 * @max: max range
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min) + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; min < max; i++, min++)
		arr[i] = min;

	return (arr);
}
