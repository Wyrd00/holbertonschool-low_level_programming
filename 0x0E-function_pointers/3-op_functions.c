#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add two int
 * @a: first int
 * @b: second int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two int
 * @a: first int
 * @b: second int
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two int
 * @a: first int
 * @b: second int
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two int
 * @a: first int
 * @b: second int
 * Return: division result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of two int
 * @a: first int
 * @b: second int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
