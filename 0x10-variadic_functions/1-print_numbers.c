#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a string to be printed between numbers.
 * @n: the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	i = 0;
	va_start(list, n);
	while (i < n)
	{
		printf("%d", va_arg(list, int));
		if (separator && (i != (n - 1)))
			printf("%s", separator);
		i++;
	}
	va_end(list);
	printf("\n");
}
