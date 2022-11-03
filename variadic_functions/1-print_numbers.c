#include "variadic_functions.h"

/**
 * print_numbers - print numbers follow by a new line
 * @separator: between numbers
 * @n: number of int passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, i;

	va_list(np);

	va_start(np, n);
	for (i = 0 ; i < n ; ++i)
	{
		a = va_arg(np, unsigned int);
		printf("%d", a);
		if (i < (n - 1))
			if (*separator == "")
				printf(" ");
			else if (*separator)
				printf("%c ", *separator);
	}
	va_end(np);
	printf("\n");
}
