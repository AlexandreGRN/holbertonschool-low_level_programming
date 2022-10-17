#include "main.h"

/**
 * is_square - find the square if a valid number
 * @n: number
 * @a: same number
 * Return: the square of n
 */
int is_square(int n, int a)
{
	if (a == 0)
	{
		return (-1);
	}
	else
	{
		if ((a * a) == n)
			return (a);
		else
			return (is_square(n, a - 1));
	}
}

/**
 * _sqrt_recursion - nature square root
 * @n: number
 * Return: the square of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (is_square(n, n));
}
