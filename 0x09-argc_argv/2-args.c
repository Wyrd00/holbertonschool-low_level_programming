#include <stdio.h>
/**
 * main - print number of arg
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
