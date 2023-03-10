#include "main.h"

/**
 * main - Entry point, prints the number of arguments passed into the program.
 * @ac: number of arguments.
 * @av: array of pointers to arguments.
 * Return: 0 (Success).
 */

int main(int ac, char **av)
{
	(void) av;
	printf("%d\n", ac - 1);
	return (0);
}
