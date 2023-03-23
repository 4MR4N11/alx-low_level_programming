#include "variadic_functions.h"

/**
 * print_char - prints a char.
 * @list: pointer to va_list.
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints an int.
 * @list: pointer to va_list.
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints a float.
 * @list: pointer to va_list.
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints a string.
 * @list: pointer to va_list.
 */

void print_string(va_list list)
{
	char *tmp;

	tmp = va_arg(list, char *);
	if (!tmp)
	{
		printf("(nil)");
		return;
	}
	printf("%s", tmp);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 *       c: char
 *       i: integer
 *       f: float
 *       s: char * (if the string is NULL, print (nil) instead)
 */

void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	char sep[3] = "";

	t_list op[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	i = 0;
	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (op[j].c)
		{
			if (format[i] == op[j].c)
			{
				printf("%s", sep);
				op[j].print_func(list);
				sep[0] = ',';
				sep[1] = ' ';
				sep[2] = '\0';
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
