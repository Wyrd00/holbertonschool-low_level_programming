#include <stdio.h>
#include <stdlib.h>

/**
 * digit_check - check that the input are numbers
 * @s: string
 * Return: 0 for success, 1 otherwise
 */

int digit_check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (!(s[i] >= '0' && s[i] <= '9'))
			return (-1);
	return (0);
}

/**
 * main - print number of arg
 * @argc: size of argv
 * @argv: array of size argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (digit_check(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);

}
