#include "holberton.h"
/**
 * *_strstr - find needle in a haystack
 * @haystack - string of character for needle to be compared to
 * @needle - string to compare to haystack
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *hayHold = haystack;
	char *needSt = needle;

	while (*haystack != '\0')
	{
		needle = needSt;
		haystack = hayHold;

		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				haystack++;
				needle++;
			}
			else
				break;
			}
			if (*needle == '\0')
				return (hayHold);
			hayHold++;
		}
		return (0);
}
