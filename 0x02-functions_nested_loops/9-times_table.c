#include "holberton.h"

/**
 * times_table - print multiplication table using _putchar
 * @void: ints
 * Return: multiplication number
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if ((y > 0) && (z < 10))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z % 10 + '0');
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			if (y == 0)
			{
				_putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
