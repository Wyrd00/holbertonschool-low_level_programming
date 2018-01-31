#include "holberton.h"
/**
 * _strlen - returns length of string
 * @s: pointer of int string
 * Result: return length
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
