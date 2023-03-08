#include "main.h"

/**
 * prime_checker - where the recursion happening.
 * @n: the number to check.
 * @i: check if it's  @n's divider.
 * Return: 1 if n is prime, 0 if not.
 */
int prime_checker(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_checker(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime.
 * @n: the number giving.
 * Return: 1 if @n is prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
