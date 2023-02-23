#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by a \n.
 */

void more_numbers(void)
{
	int j;
	int line;
	char c;

	line = 0;
	j = 0;
	while (line < 10)
	{
		c = '0';
		j = 0;
		while (j <= 14)
		{
			if (j == 10)
				c = '0';
			if (j >= 10)
				_putchar('1');
			_putchar(c);
			c++;
			j++;
		}
		_putchar('\n');
		line++;
	}
}
