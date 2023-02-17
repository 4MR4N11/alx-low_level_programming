#include <stdio.h>

/**
 * main - Entry point
 * while loop to print every lowercase character
 * while loop to print every uppercase character
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
		putchar(a++);
	while (b <= 'Z')
		putchar(b++);
	putchar('\n');
	return (0);
}

