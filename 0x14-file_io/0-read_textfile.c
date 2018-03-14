#include "holberton.h"

/**
 * read_textfile - read file and print to stdout
 * @filename: file to be printed
 * @letters: number of letters it should  read and print
 * Return: actual number of letter read/printed, or 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffa;
	ssize_t fd, fdread, fdwrite;

	if (filename == NULL)
		return (0);

	buffa = malloc (sizeof(char) * letters);

	if (buffa == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	fdread = read(fd, buffa, letters);
	
	if (fdread == -1)
		return (0);

	buffa[letters + 1] = '\0';

	fdwrite = write(STDOUT_FILENO, buffa, fdread);
	if (fdwrite == -1)
		return (0);

	close(fd);

	free(buffa);
	return (fdread);
}
