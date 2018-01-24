#include "holberton.h"

/**
 * jack_bauer - print military time
 * @void: declared integers
 * Return: all int in military time
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			_putchar('\n');
		}
}
