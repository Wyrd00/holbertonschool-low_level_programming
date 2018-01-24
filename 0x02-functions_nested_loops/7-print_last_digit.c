#include "holberton.h"

/**
 * print_last_digit - print last digit
 * @n: random int
 * Return: print digits of last num
 */
int print_last_digit(int n)
{
	int z;

	z = n % 10;

	if (z < 0)
	{
		z = -z;
	}
	_putchar(z + '0');
	return (z);
}
