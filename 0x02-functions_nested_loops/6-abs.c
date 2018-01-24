#include "holberton.h"

/**
 * _abs - calculate absoulte value w/o abs function
 * @x: an int
 * Return: x if positive, x*-1 if x was negative
 */
int _abs(int x)
{
	if (x < 0)
		return (x * (-1));
	else
		return (x);
	return (0);
}
