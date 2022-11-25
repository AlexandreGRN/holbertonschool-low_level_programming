#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = flip_bits(ULONG_MAX, 0);
	printf("%lu\n", n);
	return (0);
}
