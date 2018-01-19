#include <stdio.h>
#include <string.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
 **/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
