#include "holberton.h"

/**
 * _strlen -  length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (len);
}

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fdwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content != NULL)
	{
		fdwrite = write(fd, text_content, _strlen(text_content));
		if (fdwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
