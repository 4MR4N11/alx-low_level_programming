#include "main.h"

/**
 * main - Entry point, prints all arguments it receives.
 * @ac: number of arguments.
 * @av: array of pointers to arguments.
 * Return: 0 (Success).
 */

int main(int ac, char **av)
{
	int i;

	i = -1;
	(void) ac;
	while (av[++i])
		printf("%s\n", av[i]);
	return (0);
}
