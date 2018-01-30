#include "holberton.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer of int
 * @b: pointer of int
 * Result: swapped values
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
