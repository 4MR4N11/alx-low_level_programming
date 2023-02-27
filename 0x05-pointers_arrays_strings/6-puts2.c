#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: pointer to string.
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] == '\0')
		{
			_putchar('\n');
			return;
		}
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
