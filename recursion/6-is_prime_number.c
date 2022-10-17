#include "main.h"

/**
 * is_prime - test if n is prime
 * @n: number
 * @a: same number
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n, int a)
{
	if ((a - 1) != 1)
	{
		if (n % (a - 1) == 0)
			return (0); /*not a prime*/
		else
			return (is_prime(n, (a - 1)));
	}
	else
		return (1); /*is a prime*/
}


/**
 * is_prime_number - test if n is prime
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n));
}
