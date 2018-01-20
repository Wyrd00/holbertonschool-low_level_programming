#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
	int n;

	for (n = 0; n <= 99; n++)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');

		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
