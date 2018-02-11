#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arg
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
