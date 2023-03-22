#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: a pointer to the function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
