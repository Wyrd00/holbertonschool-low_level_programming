#include "holberton.h"

/**
 * *_strncpy - copy string
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: number of bytes
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (len < n)
	{
		dest[len] += '\0';
		len++;
	}
	return (dest);
}
