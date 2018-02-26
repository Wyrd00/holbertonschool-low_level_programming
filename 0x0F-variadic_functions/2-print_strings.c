#include "variadic_functions.h"

/**
 * print_strings - function to print string
 * @separator: char *s sep
 * @n: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *steparg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		steparg = va_arg(args, char *);
		if (steparg)
			printf("%s", steparg);
		else
			printf("(nil)");
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
