#include "holberton.h"
/**
 * *rot13 - encode string using rot13
 * @s: pointer to character
 *
 * Return: rot13 speak
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int count;

	while (s[i] != '\0')
	{
		for (count = 0; alpha[count] != '\0'; count++)
		{
			if (s[i] == alpha[count])
			{
				s[i] = rot13[count];
				break;
			}
		}
		i++;
	}
	return (s);
}
