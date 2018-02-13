#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strlen - find string length
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
	char *dup_str;
	int i;
        int len = _strlen(str);

	dup_str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			dup_str[i] = str[i];
		return (dup_str);
		free(dup_str);
	}
}
