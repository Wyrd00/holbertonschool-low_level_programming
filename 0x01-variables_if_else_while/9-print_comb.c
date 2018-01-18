#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
