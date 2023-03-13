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
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: pointer to the arguments.
 * Return: Returns a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int len;
	int i;
	int k;
	int j;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = -1;
	len = 0;
	while (++i < ac)
		len += (_strlen(av[i]) + 1);
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k++] = '\n';
		i++;
	}
	return (str);
}
