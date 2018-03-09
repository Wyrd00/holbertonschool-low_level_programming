#include "holberton.h"

/**
 * _strlen - len of string
 * @s: string
 * Return: len
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * binary_to_uint - convert binrary to unsigned int
 * @b: pointer to string of binary
 * Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, pow = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b) - 1;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			num += pow;
		pow *= 2;
		len--;
	}
	return (num);
}
