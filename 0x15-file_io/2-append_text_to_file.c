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
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
