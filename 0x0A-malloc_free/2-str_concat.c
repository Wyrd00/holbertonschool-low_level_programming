#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find string length
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*(str + len))
		len++;
	return (len);
}

/**
 * *str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer of concat strings, along with allocated mem space
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j;

	s3 = malloc(sizeof(char) * _strlen(s1) + _strlen(s2) + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s3 == NULL)
		s3 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] += '\0';
	return (s3);
	free(s3);
}
