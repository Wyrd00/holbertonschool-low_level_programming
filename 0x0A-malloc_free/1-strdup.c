#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find string length
 * @str: string
 *
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
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated from
 *
 * Return: duplicated pointer of string
 */

char *_strdup(char *str)
{
	char *dup_str = "";
	int i;
	int len = _strlen(str);

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char) * len + 1);
	printf("%d\n", len);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i]; /*Will copy null terminator as well*/
	return (dup_str);
}
