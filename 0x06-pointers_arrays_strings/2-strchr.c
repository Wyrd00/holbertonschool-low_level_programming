#include "holberton.h"

/**
 * *_strchr - find first occurence of a char in string
 * @s: string
 * @c: specific character
 *
 * Return: pointer to the first occurence of character, and null if none
 */

char *_strchr(char *s, char c)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
