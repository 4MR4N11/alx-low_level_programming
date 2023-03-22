#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array of ints.
 * @size: size of the array.
 * @cmp: pointer to the function to be user to compare values.
 * Return: returns the index of the first element
 * -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if ((size <= 0) || !cmp || !array)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
