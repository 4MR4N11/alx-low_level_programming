#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to the first integer.
 * @b: pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
