#include "main.h"

/**
 * sqrt_f - where the recusrion happening.
 * @n: the number to get square root of.
 * @i: recursion helper.
 * Return: square root of @n, -1 if @n not have a natural square root.
 */

static int sqrt_f(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_f(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to get square root of.
 * Return: square root of @n, -1 if @n not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_f(n, 0));
}
