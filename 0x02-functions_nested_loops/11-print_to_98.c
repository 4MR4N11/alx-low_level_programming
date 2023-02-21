#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line.
 * @n: the number to start with
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
}
