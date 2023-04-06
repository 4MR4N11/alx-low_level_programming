#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: pointer to the string to be measured.
 * Return: length of string.
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	else
	{
		if (write(fd, text_content, _strlen(text_content)) < 0)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
