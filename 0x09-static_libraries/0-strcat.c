#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination pointer.
 * @src: source pointer.
 * Return: @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
