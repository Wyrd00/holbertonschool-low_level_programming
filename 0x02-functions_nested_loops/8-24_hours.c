#include "holberton.h"

/**
 * jack_bauer - print military time
 * @void
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int x, y, a, b;

	for (x = 0; x <= 2; x++)
		for (y = 0; y <= 3; y++)
			for (a = 0; a <= 5; a++)
				for (b = 0; b <= 9; b++)
				{
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar('\n');
				}
}
