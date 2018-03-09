#include "holberton.h"
/**
 * clear_bit - set value of bit to 0
 * @n: num
 * @index: index where bit is being checked
 * Return: 1 if it worked, -1 else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	num <<= index;
	*n &= ~num;
	return (1);
}
