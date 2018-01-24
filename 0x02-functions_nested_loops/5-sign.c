#include "holberton.h"

/**
 * print_sign - print both number and sign
 * @n: character
 * Return: 1 if greater than zero, 0 if equal to n=0, -1 & negative if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
