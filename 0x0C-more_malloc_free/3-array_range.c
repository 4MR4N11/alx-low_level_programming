#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: from where the range starts.
 * @max: the end of the range.
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	i = 0;
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (!ptr)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
