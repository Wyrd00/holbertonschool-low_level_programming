#include "holberton.h"
/**
 * rev_array - print string in reverse
 * @a: pointer to string
 * @n: integer
 *
 * Return: array reversed
 */
void reverse_array(int *a, int n)
{
	int i;
	int c = 0;
	int end = n - 1;

	for (i = 0; i < n; i++)
	{
		c = a[i];
		a[i] = a[end];
		a[end] = c;
	}
}
