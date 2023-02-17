#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits.
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if ((a + b + c) != 168)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
