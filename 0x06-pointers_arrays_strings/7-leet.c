#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: pointer to the string.
 * Return: @str.
 */

char *leet(char *str)
{
	int i;
	int j;
	char ul[] = "aeotl";
	char ll[] = "AEOTL";
	char leetl[] = "43071";

	i = 0;
	while (str[i])
	{
		j = 0;
		while (ul[j])
		{
			if ((str[i] == ul[j]) || (str[i] == ll[j]))
				str[i] = leetl[j];
			j++;
		}
		i++;
	}
	return (str);
}
