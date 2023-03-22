#include "3-calc.h"

/**
 * op_add - return sum of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: the difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: the product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: the result of the division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of div of two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: the remainder.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
