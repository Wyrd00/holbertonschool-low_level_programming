#include "holberton.h"
/**
 * puts2 - print the first char of two
 * @s: pointer of int string
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
