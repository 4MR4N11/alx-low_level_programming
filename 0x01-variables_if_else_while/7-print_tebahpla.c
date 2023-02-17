#include <stdio.h>

/**
 * main - Entry point
 * while loop to print every lowercase character in reverse
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
		putchar(a--);
	putchar('\n');
	return (0);
}
