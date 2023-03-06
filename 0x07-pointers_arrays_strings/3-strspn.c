#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string.
 * @accept: pointer to 2nd string.
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (count);
}
