#include "main.h"

/**
 * factorial - give the factorial of a given number
 * @n : number to factorial
 * Return: -1 if error, n! if success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
