#include "variadic_functions.h"

/**
 * fi - print i
 * @a: a
 */

void fi(int a, ...)
{
	va_list(iptr);

	va_start(iptr, a);
	a = a;
	printf("%d", va_arg(iptr, int));
	va_end(iptr);
}

/**
 * fc - print i
 * @a: a
 */
void fc(int a, ...)
{
	int b;

	va_list(cptr);

	va_start(cptr, a);
	a = a;
	b = va_arg(cptr, int);
	printf("%d", b)
	va_end(cptr);
}

/**
 * ff - print i
 * @a: a
 */
void ff(int a, ...)
{
	double b;

	va_list(fptr);

	va_start(fptr, a);
	a = a;
	b = va_arg(fptr, double);
	printf("%f", b);
	va_end(fptr);
}

/**
 * fs - print i
 * @a: a
 */
void fs(int a, ...)
{
	va_list(sptr);

	va_start(sptr, a);
	a = a;
	printf("%s", va_arg(sptr, char *));
	va_end(sptr);
}

/**
 * print_all - print everything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, test;

	va_list(sptr);

	type_t listPrint[] = {
		{'c', fc},
		{'i', fi},
		{'f', ff},
		{'s', fs},
		{'\0', NULL}
	};

	va_start(sptr, format);

	while (format[i] != 0)
	{
		test = 0;
		j = 0;
		while (j < 4)
		{
			if (format[i] == listPrint[j].ctype)
			{
				listPrint[j].f(0, va_arg(sptr, char *));
				test = 1;
				break;
			}
			j++;
		}
		i++;
		if (format[i] != 0 && test == 1)
			printf(", ");
	}
	va_end(sptr);
	printf("\n");
}
