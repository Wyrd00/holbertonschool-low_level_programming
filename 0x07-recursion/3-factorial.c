#include "holberton.h"

/**
 * factorial - factorial of given number
 * @n: given number
 *
 * Return: 0, or -1 if there is an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
