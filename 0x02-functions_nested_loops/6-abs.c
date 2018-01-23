#include "holberton.h"
/**
 * int_abs - calculate absoulte value w/o abs func
 */
int _abs(int x)
{
	if (x < 0)
		return (x * (-1));
	else
		return (x);
	return (0);
}
