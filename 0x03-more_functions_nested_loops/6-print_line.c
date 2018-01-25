#include "holberton.h"

/**
 * print_line - print line 'n' times
 * @n: number of lines
 * Return: lines
 */

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar('_');
	_putchar('\n');
}
