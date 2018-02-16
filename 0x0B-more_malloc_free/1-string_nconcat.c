#include "holberton.h"
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
 * string_noncat - concot two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: ptr to allocated mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int new_n = n;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *s3;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (new_n >= len2)
		new_n = len2;

	s3 = malloc(sizeof(char) * len1 + len2 + 1);

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2 + new_n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
