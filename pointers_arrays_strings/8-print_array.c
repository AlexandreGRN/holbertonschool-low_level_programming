#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: numbers of elements printed
 */

void print_array(int *a, int n)
{
	int m = 1;

	if (*a != '\0' && n != 0)
	printf ("%d", *a);
	for (; m < n ; m++)
	{
		printf (", %d", a[m]);
	}
	printf("\n");
}
