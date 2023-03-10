#include "main.h"

/**
 * checknum - check if it's not a number.
 * @s: pointer to string(number).
 * Return: 0 @s is number, 1 if not.
 */

int checknum(char *s)
{
	int i;

	i = -1;
	while (s[++i])
	{
		if (!isdigit(s[i]))
			return (1);
	}
	return (0);
}

/**
 * main - Entry point, adds positive numbers.
 * @ac: number of arguments.
 * @av: array of pointers to arguments.
 * Return: 0 (Success), 1 (Error) if one of the arguments is not a number.
 */

int main(int ac, char **av)
{
	int i;
	int res;

	i = 1;
	res = 0;
	if (ac == 1)
	{
		printf("0\n");
		return (0);
	}
	while (av[i])
	{
		if (checknum(av[i]))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(av[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
