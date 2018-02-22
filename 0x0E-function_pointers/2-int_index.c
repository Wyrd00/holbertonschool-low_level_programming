#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for integers for first successful index
 * @array: array
 * @size: size of array
 * @cmp: pointer to function for comparing values
 * Return: 0 if false, otherwise index of first matching elem
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i])) != 0)
			return (i);
	}
	return (-1);
}
