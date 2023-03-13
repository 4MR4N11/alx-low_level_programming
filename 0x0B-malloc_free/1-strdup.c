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
	while (str[i])
		i++;
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string.
 * Return: On success, function returns a pointer to the duplicated string.
 * It returns NULL if it fails.
 */

char *_strdup(char *str)
{
	char *new;
	int i;

	i = -1;
	if (!str)
		return (NULL);
	new = malloc(sizeof(char) * _strlen(str) + 1);
	if (!new)
		return (NULL);
	while (str[++i])
		new[i] = str[i];
	return (new);
}
