#include <stdio.h>

/**
 * main - entry block
 * @void: no argument
 * Return: 0
 */

long max_prime_factor(long n)
{
	unsigned long max_prime;
	int i;

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2)
		max_prime = n;

	return (max_prime);
}

int main(void)
{
	long n = 612852475143;

	printf("%ld\n", max_prime_factor(n));
	return (0);
}
