#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 * Return: @sum, 0 if @n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}
	return (sum);
}
