#include "holberton.h"

/**
 * void print_most_numbers - print num from 0 - 9, with exception to 2 and 4
 * @void: int declared below
 * Return: numbers w/o 2 & 4
 */
void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
		if ((n != 2) && (n != 4))
		{
			_putchar(n + '0');
		}
	_putchar('\n');
}
