#include <stdio.h>

/**
 * main - Entry point
 * while loop to print lowercase character
 * check if the character is q or e and skep it
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'q' || a == 'e')
			a++;
		putchar(a++);
	}
	putchar('\n');
	return (0);
}

