#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @ac: number of arguments.
 * @av: array of pointers to arguments.
 * Return: 0 (Success), 1 if there is an error.
 */

int main(int ac, char **av)
{
	int count;
	int num;

	count = 0;
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(av[1]);
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}

