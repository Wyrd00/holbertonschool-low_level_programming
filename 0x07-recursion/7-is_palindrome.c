#include "holberton.h"

/**
 * str_len - return length of string
 * @s: string
 *
 * Return: length
 */

int str_len(char *s)
{
	if (*s == 0)
		return (0);
	return (str_len(s + 1) + 1);
}

/**
 * _is_palindrome - check whether string is palindrome
 * @s: string
 *
 * Return: 1 if it is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int end = (str_len(s) - 1);

	if (s[i] == s[end])
		return (1);
	else
		is_palindrome(s + 1);
	return (0);
}
