#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the 2 diagonals of a square matrix
 * @a: matrix
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int m = 0, n = (size * size) - size;
	int res1 = 0, res2 = 0;

	while (m <= (size * size) - 1)
	{
		res1 = res1 + a[m];
		m = m + size + 1;
	}

	while (n > 0)
	{
		res2 = res2 + a[n];
		n = n - size + 1;
	}
	printf("%d, %d\n", res1, res2);
}
