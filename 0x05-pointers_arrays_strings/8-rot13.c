#include "holberton.h"
/**
 * *rot13 - encode string using rot13
 * @s: pointer to character
 *
 * Result: rot13 speak
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int rot13_count;

	while (s[i] != '\0')
	{
		for (rot13_count = 0; alpha[rot13_count] != '\0'; rot13_count++)
		{
			if (s[i] == alpha[rot13_count])
				s[i] = rot13[rot13_count];
		}
		i++;
	}
	return (s);
}
