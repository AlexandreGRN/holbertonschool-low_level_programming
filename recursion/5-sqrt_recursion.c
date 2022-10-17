#include "main.h"

/**
 * is_square - find the square if a valid number
 * @n: number
 * @a: same number
 * @b: counter
 * Return: the square of n
 */
int is_square(int n, int a, int b)
{
	if (b == a)
	{
		return (-1);
	}
	else
	{
		if ((b * b) == n)
			return (b);
		else
			return (is_square(n, a, (b + 1)));
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
	if (n == 1)
		return (1);
	else
		return (is_square(n, n, 0));
}
