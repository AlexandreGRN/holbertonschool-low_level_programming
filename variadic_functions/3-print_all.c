#include "variadic_functions.h"

/**
 * fi - print i
 * @ptr: a
 */

void fi(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * fc - print i
 * @ptr: a
 */
void fc(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * ff - print i
 * @ptr: a
 */
void ff(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * fs - print i
 * @ptr: a
 */
void fs(va_list ptr)
{
	char *string = va_arg(ptr, char *);

	if (string == NULL)
		printf("(nil)");
}

/**
 * print_all - print everything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *sep = " ";

	va_list(sptr);

	type_t listPrint[] = {
		{"c", fc},
		{"i", fi},
		{"f", ff},
		{"s", fs},
		{NULL, NULL},
	};

	va_start(sptr, format);

	while (format != NULL && format[i] != 0)
	{
		test = 0;
		j = 0;


		while (j < 4)
		{
			if (format[i] == *listPrint[j].ctype)
			{
				printf("%s", sep);
				listPrint[j].f(sptr);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(sptr);
	printf("\n");
}
