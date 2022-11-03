#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its param
 * @n: number of var
 * Return: the seum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int res = 0, i, a;
	va_list nptr;

	va_start(nptr, n);
	for (i = 0 ; i < n ; ++i)
	{
		a = va_arg(nptr, unsigned int);
		res = res + a;
	}
	va_end(nptr);
	return (res);

}
