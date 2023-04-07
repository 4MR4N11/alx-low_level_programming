#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to set bit
 * @index: index of bit to set
 * Return: 1 if it worked or -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int tmp;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	tmp = ~*n;
	tmp = (tmp | (1 << index));
	*n = ~tmp;
	return (1);
}
