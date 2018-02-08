#include "holberton.h"

/**
 * _pow_recursion - return value of x raised to y
 * @x: base number
 * @y: raised number
 *
 * Return: value, or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
