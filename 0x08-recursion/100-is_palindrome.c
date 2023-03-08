#include "main.h"

/**
 * palindrome_checker - where the recursion happening.
 * @s: pointer to string.
 * @i: index to the last character in the string.
 * @j: index to the first character in the string.
 * Return: 1 if @s is palindrome, 0 if not.
 */

int palindrome_checker(char *s, int i, int j)
{
	if (i <= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (palindrome_checker(s, i - 1, j + 1));
}

/**
 * len_counter - get length of string.
 * @s: pointer to string.
 * Return: length of @s.
 */

int len_counter(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_counter(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: pointer to string.
 * Return: 1 if @s is palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, len_counter(s) - 1, 0));
}
