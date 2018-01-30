#include "holberton.h"
/**
 * int _strlen - returns length of string
 * @s: pointer of int string
 * Result: return length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
