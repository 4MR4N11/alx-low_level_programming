#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 */

void print_triangle(int size)
{
	int i;
	int j;
	int space;

	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			space = size - i;
			while (space > 1)
			{
				_putchar(' ');
				space--;
			}
			while (j <= i)
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
