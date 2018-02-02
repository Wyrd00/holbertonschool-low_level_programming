#include "holberton.h"

/**
 * *cap_string - capitalize first letter
 * @s: pointer to s
 *
 * Return: uppercase first letter of each word
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
		case '\t':
		case '\n':
		case ' ':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] -= 32;
			}
			break;
		default:
			break;
		}
	}
	return (s);
}
