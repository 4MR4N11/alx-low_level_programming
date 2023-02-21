#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int res;

	while (j <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			res = j * i;
			if ((res / 10) != 0)
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
			if (i != 9)
			{
				_putchar(',');
				if ((((i + 1) * j) / 10) == 0)
					_putchar(' ');
				_putchar(' ');
			}
			i++;
		}
		j++;
		_putchar('\n');
	}
}
