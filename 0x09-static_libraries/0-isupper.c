#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the character to check
 * Return: 1 if the @c is uppercase,0 otherwise.
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
