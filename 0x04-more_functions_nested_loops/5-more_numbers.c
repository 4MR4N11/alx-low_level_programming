#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by a \n.
 */

void more_numbers(void)
{
	int i;
	int j;
	char c;

	i = 0;
	while (i <= 10)
	{
		j = 0;
		c = '0';
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
				if (j == 10)
					c = '0';
			}
			_putchar(c);
			c++;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
