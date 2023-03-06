#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring @needle in @haystack
 * The terminating null bytes (\0) are not compared.
 * @haystack: pointer to string.
 * @needle: pointer to string.
 * Return: to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, l;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		l = i;
		while (haystack[i] == needle[j])
		{
			if (!needle[j + 1] && j != 0)
				return (haystack + l);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}

