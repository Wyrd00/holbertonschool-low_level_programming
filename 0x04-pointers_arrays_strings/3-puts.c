#include "holberton.h"
/**
 * _puts - prints a string
 * @str: pointer to string
 * Result: print string length
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str++)
	{
		_putchar(str[i]);
		     i++;
	}
	_putchar('\n');
}
