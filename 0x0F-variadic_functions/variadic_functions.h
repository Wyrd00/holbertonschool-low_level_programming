#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct compare - struct
 * @s: char
 * @f: function pointer to the list
 */
typedef struct compare
{
	char *s;
	void (*f)(va_list);
} Compare;

#endif
