#include "holberton.h"
/**
 * main - file
 * @ac: arg count
 * @av: argv
 * Return: 0 or error
 */
int main(int ac, char **av)
{
	int fd, fd2, b_read, b_write;
	char *f_from = av[1];
	char *f_to = av[2];
	char buffa[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(f_to, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", f_from);
		exit(98);
	}

	fd2 = open(f_from, O_TRUNC | O_CREAT | O_WRONLY, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
		exit(99);
	}

	do {
		b_read = read(fd2, buffa, 1024);
		if (b_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
			exit(98);
		}
		b_write = write(fd, buffa, b_read);
		if (b_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f_to);
			exit(99);
		}
	} while (b_read == 1024);

	close(fd);
	{
		if (close(fd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", f_from);
			exit(100);
		}
	}
	close(fd2);
	{
		if (close(fd2) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", f_to);
			exit(100);
		}
	}
	return (0);
}
