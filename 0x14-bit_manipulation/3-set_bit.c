#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set bit
 * @index: index of bit to set
 * Return: 1 if it worked or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	tmp = *n;
	*n = (tmp | (1 << index));
	if (!n)
		return (-1);
	return (1);
}
