#include "variadic_functions.h"
#include <stdlib.h>

/**
 * printchar - prints char
 * @args: va_list
 */
void printchar(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * printstring - prints string
 * @args: va_list
 */
void printstring(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * printfloat - prints float
 * @args: va_list
 */
void printfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * printint - prints int
 * @args: va_list
 */
void printint(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_all - prints stuff
 * @format: inputed string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	char *separator = "";
	va_list args;

	Compare compare[] = {
		{"c", printchar},
		{"s", printstring},
		{"i", printint},
		{"f", printfloat},
		{NULL, NULL}
	};
	va_start(args, format);

	while (format[i] != 0 && format != NULL)
	{
		j = 0;
		while (compare[j].f != NULL)
		{
			if (*(compare[j].s) == format[i])
			{
				printf("%s", separator);
				compare[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
