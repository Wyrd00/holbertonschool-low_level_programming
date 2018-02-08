#include "holberton.h"
/**
 * find_sqrt - find whether num is sqrt
 * @n: number
 * @div: divider
 *
 * Return: square root of int
 */

int find_sqrt(int n, int div)
{
	if (div == n)
		return (-1);
	else if (div * div != n)
	{
		return (find_sqrt(n, div + 1));
	}
	return (div);
}

/**
 * _sqrt_recursion - sqrt of natural number
 * @n: number
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	int div = 2;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (find_sqrt(n, div));
}
