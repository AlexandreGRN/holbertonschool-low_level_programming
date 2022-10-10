#include "main.h"

/**
 *swap_int - swap 2 int
 *@a: First int to swap
 *@b: Second int to swap
 *@*a: Pointer to a
 *@*b: Pointer to b
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
