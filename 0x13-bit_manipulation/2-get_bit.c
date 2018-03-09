#include "holberton.h"
/**
 * get_bit - return value of bit at index
 * @n: num
 * @index: index where bit is being checked
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	num <<= index;
	if (num & n)
		return (1);
	else
		return (0);
}
