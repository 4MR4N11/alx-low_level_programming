#include "main.h"

/**
 * print_square - prints a square using #, followed by a new line.
 * @size: the size of the square.
 */

void print_square(int size)
{
	int i;
	int j;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
