#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line.
 * If the number of characters is odd, the function should print
 * the last n characters of the string, where n = (length_of_str - 1) / 2
 * @str: pointer to string.
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if ((i % 2) == 0)
	{
		i /= 2;
		while (str[i])
			_putchar(str[i++]);
	}
	else
	{
		i /= 2;
		i += 1;
		while (str[i])
			_putchar(str[i++]);
	}
	_putchar('\n');
}
