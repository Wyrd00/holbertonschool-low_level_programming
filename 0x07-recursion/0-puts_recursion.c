#include "holberton.h"
/**
 * _puts_recursion - print string, follow by newline
 * @s: string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
		_puts_recursion(s + i);
	if (s[i] == '\0')
		_putchar('\n');
}
