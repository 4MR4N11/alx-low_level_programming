#include "main.h"

/**
 * _strncpy - same behavior of strncpy().
 * @dest: destination.
 * @src: source.
 * @n: number of character to copy.
 * Return: @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
