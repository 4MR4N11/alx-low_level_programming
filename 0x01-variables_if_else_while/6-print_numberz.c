#include <stdio.h>

/**
 * main - Entry point
 * while loop to print numbers from 0 to 9
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
		putchar(a++);
	putchar('\n');
	return (0);
}
