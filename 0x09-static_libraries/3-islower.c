#include "main.h"

/**
 * _islower - check if the character is lowercase or not
 * @c: the character as argument
 * Return: 1 if the character is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
