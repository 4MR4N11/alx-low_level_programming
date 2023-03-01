#include "main.h"

/**
 * divider_len - count lenght of the integer.
 * @n: the integer.
 * Return: the lenght.
 */

static int divider_len(int n)
{
	int i;

	i = 1;
	while ((n / 10) != 0)
	{
		n /= 10;
		i *= 10;
	}
	return (i);
}

/**
 * print_number - prints an integer using only _putchar.
 * @n: the integer.
 */

void print_number(int n)
{
	int tmp;
	int l;

	l = divider_len(n);
	tmp = l;
	while (l != 0)
	{
		if (n < 0)
		{
			if (tmp == l)
				_putchar('-');
			_putchar(((n / l) * -1) + '0');
		}
		else
			_putchar((n / l) + '0');
		n %= l;
		l /= 10;
	}
}
