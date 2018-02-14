#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenate all argument of program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: concat arguments
 */

char *argstostr(int ac, char **av)
{
	char *res;
	int i, j, k = 0;
	int size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	size += ac + 1; /*accounting for null*/

	res = malloc(sizeof(char) * size);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			res[k++] = av[i][j];
		res[k++] += '\n';
	}
	res[k] += '\0';
	return (res);
}
