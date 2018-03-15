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
 * append_text_to_file - append text
 * @filename: file
 * @text_content: NULL terminated string to add at end of file
 * Return: 1 success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, b_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	b_write = write(fd, text_content, _strlen(text_content));

	if (b_write == -1)
		return (-1);

	close(fd);

	return (1);

}
