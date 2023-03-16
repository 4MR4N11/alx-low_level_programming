#include "main.h"

/**
 * _strlen - get length of a string.
 * @s: pointer to the string.
 * Return: length of @s.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to the 1st string.
 * @s2: pointer to the second string.
 * @n: number of bytes to copy from s2.
 * Return: pointer to the string which contains the concatenation f s1 and s2,
 * NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * ((unsigned int)_strlen(s1) + n + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2 && s2[i] && i < n)
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
