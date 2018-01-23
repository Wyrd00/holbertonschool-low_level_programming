#include "holberton.h"

void print_alphabet_x10(void)
{
	int ch;
	int ch2;

	for (ch = 1; ch <= 10; ch++)
		for (ch2 = 'a'; ch2 <= 'z'; ch2++)
		{
			_putchar(ch2);
			if (ch2 == 'z')
				_putchar('\n');
		}
}
