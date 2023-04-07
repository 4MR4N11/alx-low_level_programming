#include "main.h"

/**
 * fd_handle - closes two file descriptors.
 * @fd1: file descriptor 1.
 * @fd2: file descriptor 2.
 * @check: check if we only need to close fd or not.
 * @av: arguments.
 * Return: void.
 * On error, it prints an error message and exits with status 100.
*/

void fd_handle(int fd1, int fd2, int check, char **av)
{
	if (check)
	{
		if (fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			if (close(fd1) < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
				exit(100);
			}
			exit(99);
		}
	}
	else
	{
		if (close(fd1) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
		if (close(fd2) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
			exit(100);
		}
	}
}

/**
 * main - copies the content of a file to another file.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: 0 on success, 97 if the number of arguments is not the correct one,
 * 98 if the file_from does not exist, 99 if the file_to cannot be created or
 * written to, 100 if the file_from cannot be closed or read from.
*/

int main(int ac, char **av)
{
	int fd1, fd2, rsize;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	fd_handle(fd1, fd2, 1, av);
	buff = malloc(sizeof(char) * BUFFER_SIZE);
	while ((rsize = read(fd1, buff, BUFFER_SIZE)))
	{
		if (write(fd2, buff, rsize) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buff);
			fd_handle(fd1, fd2, 0, NULL);
			return (99);
		}
		free(buff);
		buff = malloc(sizeof(char) * BUFFER_SIZE);
	}
	if (rsize < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buff);
		fd_handle(fd1, fd2, 0, NULL);
		return (98);
	}
	free(buff);
	return (0);
}
