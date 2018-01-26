#include "holberton.h"

/**
 * print_square - print pound 'n' times
 * @size: size of sq
 * Return: squares
 */

void print_square(int size)
{
	char c, r;

	if (size <= 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
			_putchar('#');
		_putchar('\n');
	}
}
