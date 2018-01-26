#include "holberton.h"

/**
 * print_triangle - print pound 'n' times into triangle shape
 * @size: size of triangle
 * Return: triangle
 */

void print_triangle(int size)
{
	int n, s, p;

	for (n = 1; n <= size; n++)
	{
		for (s = size - n; s > 0; s--)
			_putchar(' ');
		for (p = n; p > 0; p--)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
