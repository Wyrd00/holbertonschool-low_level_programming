#include "holberton.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: pointer to num;
 * @index: index starting at 0
 * Return: 1 if it works, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	num <<= index;
	*n = (*n | num);
	return (1);
}
