#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *check;

	i = 0;
	check = (char *)&i;
	if (*check == 1)
		return (1);
	return (0);
}
