#include <stdio.h>

/**
 * main - print int, but multiples of three will print 'Fizz'/
 * while mulitples of five will print 'Buzz'.
 * Multiples of both will print "FizzBuzz".
 * @n: int
 * Return: int, fizz, buzz, fizzbuzz
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		{
			if (n % 3 == 0)
				printf("%s", "Fizz");
			if (n % 5 == 0)
				printf("%s", "Buzz");
			else if ((n % 3 != 0) && (n % 5 != 0))
				printf("%d", n);
		}
		if (n != 100)
			printf("%c", ' ');
	}
	putchar('\n');
	return (0);
}
