#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to string.
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int size;
	int j;

	j = 0;
	size = 0;
	while (s[size])
		size++;
	i = size - 1;
	while (j <= (size / 2))
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}

