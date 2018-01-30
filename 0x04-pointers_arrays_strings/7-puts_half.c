#include "holberton.h"
/**
 * puts_half - print the second half of the string
 * @str: pointer of int string
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}

	if (i % 2 == 0)
		i = len / 2;
	else
		i = (len / 2) + 1;
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
