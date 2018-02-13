#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates array of chars and initializes with char
 * @size: size of array
 * @c: intializing char
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
		return (arr);
	}
}
