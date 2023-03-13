#include "main.h"

/**
 * _strlen - count length of a string.
 * @str: pointer to string.
 * Return: length of @str.
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: return pointer to the newly allocated space in memory
 * which contains the contents of @s1, followed by the contents of @s2.
 * NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int i, j;
	char *new;

	i = 0;
	j = 0;
	len = _strlen(s1) + _strlen(s2);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (s1 && s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}
