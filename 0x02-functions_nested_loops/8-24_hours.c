#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			if (i == 2 && j > 3)
				return;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
