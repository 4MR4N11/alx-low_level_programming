#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * At each recursive call, the function increments a counter by 1
 * which keeps track of the length of the string.
 * @s: pointer to string.
 * Return: the counter is returned.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
