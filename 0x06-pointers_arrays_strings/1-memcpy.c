#include "holberton.h"

/**
 * *_memcpy - copy memory in hexa
 * @dest: destination area
 * @src: source area
 * @n: int of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
