#include "main.h"

/**
 * main - Entry point, prints the name of the program, followed by \n.
 * @argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: 0 (Success).
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
