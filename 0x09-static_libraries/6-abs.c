#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer as argument.
 * Return: the absolute value of the integer.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
