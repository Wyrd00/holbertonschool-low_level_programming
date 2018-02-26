#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);
	char *steparg;

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
