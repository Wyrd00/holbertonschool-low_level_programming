#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to memory
 * @old_size: size of the old allocated space
 * @new_size: size of the new allocated space
 * Return:
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i = 0;

	if (ptr == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size + 1);
	for (i = 0; i < new_size; i++)
		p[i] = ((char *)ptr)[i];
	return (p);
}
