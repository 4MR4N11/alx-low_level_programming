#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *tmp;

	if (n == 0)
		return;
	i = 0;
	va_start(list, n);
	while (i < n)
	{
		tmp = va_arg(list, char *);
		if (!tmp)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (separator && i < (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
