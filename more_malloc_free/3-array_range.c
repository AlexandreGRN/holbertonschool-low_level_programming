#include "main.h"

/**
 * array_range - create an array of int
 * @min:  min value of int
 * @max: max value of int
 * Return: ptr to array, or NULL if problem
 */

int *array_range(int min, int max)
{
	int n, i;
	int *a;

	n = max - min + 1; /*number of int*/

	if (n <= 0) /*if min > max*/
		return (0);

	a = malloc(n * sizeof(int)); /*assign memory*/
	if (a == 0)
	{
		free(a);
		a = 0;
		return (0);
	}

	for (i = 0 ; i != n ; i++) /*assign value*/
	{
		a[i] = min + i;
	}

	return (a);
}
