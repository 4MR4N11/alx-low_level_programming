#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 followed by a new line.
 * except 0 and 4.
 */

void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c == '2' || c == '4')
			c++;
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
