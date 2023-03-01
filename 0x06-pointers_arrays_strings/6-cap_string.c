#include "main.h"

/**
 * check_previous - check for separators of the words.
 * separators are: space, \t, \n, ,, ;, ., !, ?, \", (, ), {, and }
 * @str: pointer to the string.
 * @i: index.
 * Return: 1 if there is a separator, 0 if not.
 */

static int check_previous(char *str, int i)
{
	if (i == 0 || str[i - 1] == 32 || str[i - 1] == 9
		|| str[i - 1] == 10 || str[i - 1] == 44
		|| str[i - 1] == 59 || str[i - 1] == 46
		|| str[i - 1] == 33 || str[i - 1] == 63
		|| str[i - 1] == 34 || str[i - 1] == 40
		|| str[i - 1] == 123 || str[i - 1] == 41
		|| str[i - 1] == 124)
	{
		return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to the string.
 * Return: @str.
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((check_previous(str, i)) && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
