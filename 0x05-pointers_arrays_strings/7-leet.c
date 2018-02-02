#include "holberton.h"
/**
 * *leet - replace vowels with respective numerals
 * @s: character
 *
 * Return: leet speak
 */
char *leet(char *s)
{
	char leet[] = "a4A4e3E3o0O0t7T7l1L1";
	int i = 0;
	int leet_count;

	while (s[i] != '\0')
	{
		for (leet_count = 0; leet_count < 20; leet_count += 2)
		{
			if (s[i] == leet[leet_count])
				s[i] = leet[leet_count + 1];
		}
		i++;
	}
	return (s);
}
