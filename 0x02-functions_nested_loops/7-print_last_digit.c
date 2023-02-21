#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number as argument.
 * Return: tha last digit of the number.
 */

int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		_putchar('8');
		return (8);
	}
	if (n < 0)
		n *= -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
