#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size to be allocated.
 * Return: pointer to the allocated memory area.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
