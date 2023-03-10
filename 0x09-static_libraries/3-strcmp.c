#include "main.h"

/**
 * _strcmp - same behavior of strcmp() (compare two strings).
 * @s1: first string.
 * @s2: second strig.
 * Return: 0 if the string are the same, otherwise the difference.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
