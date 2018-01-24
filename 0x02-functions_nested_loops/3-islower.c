#include "holberton.h"

/**
 *_islower - check that all is lower character
 *@c: its an integer
 * Return: 1 if true, return 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
