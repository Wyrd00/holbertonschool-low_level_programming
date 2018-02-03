#include "holberton.h"
/**
 * reverse_array - print string in reverse
 * @a: pointer to string
 * @n: integer
 *
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
