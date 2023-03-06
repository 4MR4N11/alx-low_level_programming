#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: The pointer to the memory area.
 * @b: the constant byte.
 * @n: Number of bytes to fill.
 * Return: @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i++] = b;
	return (s);
}
