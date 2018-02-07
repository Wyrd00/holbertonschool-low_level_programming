#include "holberton.h"

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
			else
				hayHold++;
		}
		return (0);
}
