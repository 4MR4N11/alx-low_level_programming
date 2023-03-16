#include "main.h"

/**
 * _calloc - allocates memory for an array, same behaviour of calloc().
 * @nmemb: number of elements of an array.
 * @size: bytes of element.
 * Return: pointer to the new allocated memory area that sets to zero.
 * NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int len;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	len = size * nmemb;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
