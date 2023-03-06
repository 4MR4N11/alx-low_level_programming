#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to array of integers.
 * @size: size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	while (i < size)
	{
		s1 += a[i * size + i];
		s2 += a[(i + 1) * (size  - 1)];
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
