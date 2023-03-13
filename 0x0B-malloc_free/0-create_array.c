#include "main.h"

/**
 * create_array - creates array, and initializes it with a specific char.
 * @size: size of the array.
 * @c: the specific char.
 * Return: the array after allocation an initialization
 * or NULL if is fails.
 */

char *create_array(unsigned int size, char c)
{
	char *buff;
	unsigned int i;

	if (size == 0)
		return (NULL);
	i = 0;
	buff = malloc(sizeof(char) * size);
	if (buff == NULL)
		return (NULL);
	while (i < size)
		buff[i++] = c;
	return (buff);
}
