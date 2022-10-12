#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: the array to reverse
 * @n: number of element
 */

void reverse_array(int *a, int n)
{
	int p;
	int temp;

	n--;

	for (p = 0 ; p < n ; p++)
	{
		temp = a[p];
		a[p] = a[n];
		a[n] = temp;
		n--;
	}
}
