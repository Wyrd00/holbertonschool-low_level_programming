#include "holberton.h"

/**
 * *_strncat - concatenate strings
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 * Return: pointer to resulting concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] += '\0';
	return (dest);
}
