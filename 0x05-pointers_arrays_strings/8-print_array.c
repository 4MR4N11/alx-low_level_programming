#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by \n.
 * @a: pointer to string.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if ((i + 1) != n)
			printf(", ");
		i++;
	}
	printf("\n");
}
