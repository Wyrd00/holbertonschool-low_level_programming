#include "holberton.h"
/**
 * print_number - print stated integers
 * @n: int
 * Return: integer
 */
void print_number(int n)
{
	unsigned int u = n;
	unsigned int un;
	unsigned int multiplier;
	int counter1;
	int counter2;

	if (n < 0)
	{
		_putchar('-');
		u = -n;
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	if (u > 0)
	{
		un = u;
		for (counter1 = 0; u > 0; counter1++)
		{
			u = u / 10;
		}
		counter2 = counter1;
		for (multiplier = 1; counter2 > 1; counter2--)
		{
			multiplier *= 10;
		}
		while (counter1 > 0)
		{
			_putchar(un / multiplier + '0');
			un = un % multiplier;
			multiplier = multiplier / 10;
			counter1--;
		}
	}
}
