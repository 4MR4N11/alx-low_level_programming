#include <stdio.h>

/**
 * main - Entry point
 * while loop to print numbers from 0 to 9
 * while loop to print characters from a to f
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;
	char b;

	a = '0';
	b = 'a';
	while (a <= '9')
		putchar(a++);
	while (b <= 'f')
		putchar(b++);
	putchar('\n');
	return (0);
}

