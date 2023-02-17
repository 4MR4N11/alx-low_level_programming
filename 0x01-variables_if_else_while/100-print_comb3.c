#include <stdio.h>

/**
 * main - Entry point
 * Decription: print all possible
 * different combinations of two digits
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	int n1, n2;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = '0';
		while (n2 <= '9')
		{
			if (n1 < n2 && n1 != n2)
			{
				putchar(n1);
				putchar(n2);
				if ((n1 + n2) != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
