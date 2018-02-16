#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 *
 * Return: int, or 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *num = malloc(b);

	if (num == NULL)
		exit(98);

	return (num);
}
