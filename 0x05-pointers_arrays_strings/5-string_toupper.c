#include "holberton.h"

/**
 * *string_toupper - lowercase to uppercase
 * @s: pointer to s
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	return (s);
}
