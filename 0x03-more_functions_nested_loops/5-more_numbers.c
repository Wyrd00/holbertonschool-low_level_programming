#include "holberton.h"

/**
 * more_numbers - print num from 0 - 14 ten times
 * @void: int declared below
 * Return: int 0-14, 10x
 */
void more_numbers(void)
{
	char t, n;

	for (t = 0; t <= 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if ((n / 10) != 0)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
