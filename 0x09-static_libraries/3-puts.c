#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: pointer to string.
 */

void _puts(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		_putchar(str[i]);
	_putchar('\n');
}
