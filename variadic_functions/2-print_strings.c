#include "variadic_functions.h"

/**
 * print_strings - prints multiples strings
 * @separator: separator between strings
 * @n: numbers of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;

	char *string;

	va_list(sptr);

	va_start(sptr, n);
	for (i = 0 ; i < n ; ++i)
	{
		string = va_arg(sptr, char *);
		for (j = 0 ; string[j] != '\0' ; j++)
		{
			printf("%c", string[j]);
		}
		if (i < n - 1)
			printf("%c ", *separator);
	}
	printf("\n");
}
