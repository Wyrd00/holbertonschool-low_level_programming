#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print int up to 98
 * @n: random int
 * Return: print digits
 */
void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	if (n < 98)
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	if (n == 98)
		printf("%d\n", n);
}
