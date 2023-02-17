#include <stdio.h>

/**
 * main - Entry point
 * while loop to print numbers from 0 to 9
 * print , and space while the number is less or equal to 9
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a++);
		if (a <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

