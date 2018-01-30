#include "holberton.h"
/**
 * int rev_string - reverse string
 * @*s: pointer of int s
 * Result: return reverse string
 */
void rev_string(char *s)
{
	int i;
	char newS[100];
	int k = 0;
	int original_length;

	while (s[i] != '\0')
		i++;
	original_length = i;
	for (i = i - 1; i >= 0; i--)
	{
		newS[k] = s[i];
		k++;
	}
	for (i = 0; i < original_length; i++)
	{
		s[i] = newS[i];
		k++;
	}
}
