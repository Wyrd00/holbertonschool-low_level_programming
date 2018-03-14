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

/**
 * create_file - create a write file
 * @filename: file name
 * @text_content: file content
 * Return: 1 on success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fdwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fdwrite = write(fd, text_content, _strlen(text_content));

	if (fdwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
