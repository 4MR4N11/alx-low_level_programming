#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number to flip bits from.
 * @m: number to flip bits to.
 * Return: number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_count;

	flip_count = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			flip_count++;
		n >>= 1;
		m >>= 1;
	}
	return (flip_count);
}
