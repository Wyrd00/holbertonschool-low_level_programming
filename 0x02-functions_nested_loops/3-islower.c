#include "holberton.h"

/**
 * _islower(int c) - check that all is lower character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
