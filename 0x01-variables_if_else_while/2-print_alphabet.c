#include <stdio.h>

/**
 * main - Entry point
 * while loop to print every lowercase character
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		putchar(a++);
	putchar('\n');
	return (0);
}
