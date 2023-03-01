#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to the string.
 * Return: @str after changes.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	       i++;
	}
	return (str);
}
