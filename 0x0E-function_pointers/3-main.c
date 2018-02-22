#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - put it all together
 *
 * @argc: argc
 * @argv: argv
 * Return: 0 if fail, num otherwise
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	fun = get_op_func(argv[2]);

	if (fun == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((fun == op_div || fun == op_mod) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = fun(num1, num2);

	printf("%d\n", result);
	return (0);
}
