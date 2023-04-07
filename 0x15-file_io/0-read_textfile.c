#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of the file to read.
 * @letters: number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t check1, check2;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	check1 = read(fd, buff, letters);
	if (check1 == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	check2 = write(STDOUT_FILENO, buff, check1);
	if (check2 == -1 || check2 != check1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (check2);
}
