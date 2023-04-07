#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of bit to get
 * Return: value of bit at index or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	unsigned int bits;

	if (!n)
		return (0);
	bits = 0;
	tmp = n;
	while (tmp)
	{
		tmp >>= 1;
		bits++;
	}
	bits -= 1;
	if (index > bits)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
	return (-1);
}
