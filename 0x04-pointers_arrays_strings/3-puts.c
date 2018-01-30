#include "holberton.h"
/**
 * int _puts - prints a string
 * @str: pointer to string
 * Result: print string length
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
		     i++;
	}
	_putchar('\n');
}
