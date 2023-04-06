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
	size_t i;
	ssize_t count, check;
	char c;

	count = 0;
	i = 0;
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	while (i < letters)
	{

		check = read(fd, &c, 1);
		if (check < 0)
		{
			close(fd);
			return (0);
		}
		else if (check == 0)
		{
			close(fd);
			return (count);
		}
		count += check;
		if (write(STDOUT_FILENO, &c, 1) < 0)
		{
			close(fd);
			return (0);
		}
		i++;
	}
	close(fd);
	return (count);
}
