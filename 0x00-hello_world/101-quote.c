#include <unistd.h>

/**
 * sz - str
 * @str: Argument
 * Return: Always 0 (Success)
 */

int sz(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	i = sz(s);
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", i);
	return (1);
}
