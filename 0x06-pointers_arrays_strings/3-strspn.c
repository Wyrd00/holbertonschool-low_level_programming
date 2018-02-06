#include "holberton.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: prefix substring
 *
 * Return: first occurence of character, and null if none
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;
	int a_len = 0;
	int counter = 0;

	while (s[len] != '\0')
		len++;

	while (accept[a_len] != '\0')
		a_len++;

	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= a_len; j++)
		{
			if (s[i] == accept[a_len])
			{
				counter++;
				break;
			}
		}
	}
	return (counter);
}
