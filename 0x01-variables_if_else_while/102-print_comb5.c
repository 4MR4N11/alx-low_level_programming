#include <stdio.h>

/**
 * write_comb - print the numbers
 * @a: the first two digits
 * @b: the second two digits
 */

void	write_comb(int a, int b)
{
	putchar(48 + a / 10);
	putchar(48 + a % 10);
	putchar(' ');
	putchar(48 + b / 10);
	putchar(48 + b % 10);
	if (a != 98 || b != 99)
	{
		putchar(',');
		putchar(' ');
	}
}

/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers.
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write_comb(a, b);
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
