#include "holberton.h"
/**
 * *_strcpy - copies string from src to dest
 * @dest: pointer to src
 * @src: pointer to dest
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < src[i] ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
