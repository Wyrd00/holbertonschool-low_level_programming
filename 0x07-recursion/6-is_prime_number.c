#include "holberton.h"

/**
 * is_prime_number - check if integer is prime
 * @n: integer
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int count = 2;

	if (n == 1 || n < 0)
		return (0);
	return (prime_check(n, count));
}

/**
 * prime_check - test for prime
 * @n: integer
 * @count: changing counter
 * Return: prime_check, 0 otherwise
 */

int prime_check(int n, int count)
{
	if (n == count)
		return (1);
	if (n % count != 0)
		return (prime_check(n, count + 1));
	else
		return (0);
}
