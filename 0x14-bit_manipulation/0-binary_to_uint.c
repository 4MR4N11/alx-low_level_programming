#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if there is one or more chars in
 * b that is not 0 or 1 or b is NULL.
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;
	unsigned int bit_pos;

	bit_pos = 0;
	i = 0;
	result = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (--i >= 0)
	{
		if (b[i] == '1')
			result += (1 << bit_pos);
		bit_pos++;
	}
	return (result);
}
