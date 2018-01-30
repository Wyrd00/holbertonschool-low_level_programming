#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: pointer of int s
 */
void rev_string(char *s)
{
	int i = 0;
        int len = 0;
	char inter;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		inter = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = inter;
	}
}
