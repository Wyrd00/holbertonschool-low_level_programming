#include "holberton.h"
/**
 * _isupper - Identify all capital alphabets
 * @c: int
 * Return: 1 if capital alphabet, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
