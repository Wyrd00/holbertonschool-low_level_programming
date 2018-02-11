#include <stdio.h>
/**
 * main - print number of arg
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	if (argv)
		printf("%d\n ", argc - 1);
	return 0;
}
