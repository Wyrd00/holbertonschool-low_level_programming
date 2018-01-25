#include "holberton.h"

/**
 * print_diagonal - print line 'n' times diagonally
 * @n: number of lines
 * Return: lines
 */

void print_diagonal(int n)
{
	char s, t;

	for (t = 0; t < n; t++)
	{
		if (t != 0)
		{
			for (s = 0; s < t; s++)
			{
				_putchar(' ');
			}
		}
                _putchar('\\');
                _putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
