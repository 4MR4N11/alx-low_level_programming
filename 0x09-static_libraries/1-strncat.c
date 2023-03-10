#include "main.h"

/**
 * _strncat - same behavior of strncat() (concatenates two strings.).
 * @dest: destination.
 * @src: source.
 * @n: number of character to copy from src.
 * Return: @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((j < n) && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
