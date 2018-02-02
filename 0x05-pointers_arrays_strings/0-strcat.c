#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - concatenate strings together
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + 1] += '\0';
	return (dest);
}
