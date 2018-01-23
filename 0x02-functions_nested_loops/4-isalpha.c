#include "holberton.h"

/**
 * _isalpha - return (1) if alphabet characters, both upper and lower case
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
