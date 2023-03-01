#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to array of integers.
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;
	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
