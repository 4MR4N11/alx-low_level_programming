#include "main.h"

/**
 * main - Entry point.
 * Description: finds and prints the largest prime factor
 * of the number 612852475143 followed by a new line.
 * Return: 0 (Success).
 */

int main(void)
{
	long int n = 612852475143;
	long int f = 2;

	while (n > 1)
	{
		if (n % f == 0)
		{
			n /= f;
		}
		else
			f++;
	}
	printf("%ld\n", f);
	return (0);
}
