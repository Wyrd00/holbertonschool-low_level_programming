#include <stdio.h>
/**
 * main - print the program name
 * @argc: the size of argv
 * @argv: array of size argc
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
