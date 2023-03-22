#include "3-calc.h"

/**
 * main - Entry point. performs simple operations.
 * @ac: number of arguments.
 * @av: the arguments.
 * Return: 0 (Success), 98, 99, 100 on error.
 */

int main(int ac, char **av)
{
	int n1, n2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	op = av[2];
	if ((op[1] != '\0') || ((op[0] != '+') && (op[0] != '-')
		&& (op[0] != '/') && (op[0] != '*') && (op[0] != '%')))
	{
		printf("Error\n");
		return (99);
	}
	if (((op[0] == '/') || (op[0] == '%')) && (n2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
