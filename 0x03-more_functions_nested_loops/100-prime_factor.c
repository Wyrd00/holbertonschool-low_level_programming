#include <stdio.h>

/**
 * max_prime_factor - calculate largest prime factor
 * @n: long int
 * Return: largest prime number
 */

long max_prime_factor(long n)
{
	unsigned long max_prime;
	int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n = n / i;
		}
	}
	return (max_prime);
}

/**
 * main - entry block
 * @void: no argument
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", max_prime_factor(n));
	return (0);
}
