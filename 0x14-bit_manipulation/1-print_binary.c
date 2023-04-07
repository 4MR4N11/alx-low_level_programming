#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int bits;

	if (!n)
	{
		_putchar('0');
		return;
	}
	bits = 0;
	tmp = n;
	while (tmp)
	{
		tmp >>= 1;
		bits++;
	}
	bits -= 1;
	while (bits >= 0)
	{
		if ((n >> bits) & 1)
			_putchar('1');
		else
			_putchar('0');
		bits--;
	}
}
