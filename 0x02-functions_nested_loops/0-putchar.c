#include "main.h"

/**
 * main - Entry point
 * print the message
 * Return: 0 (SUCCESS)
 */


int main(void)
{
	int i = -1;
	char str[] = "_putchar\n";

	while (++i <= 8)
		_putchar(str[i]);
	return (0);
}
