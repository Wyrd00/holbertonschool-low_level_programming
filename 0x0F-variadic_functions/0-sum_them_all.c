#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of parameters
 * @n: arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list arg;

	va_start(arg, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
