#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary vers of an uint
 * @n: uint
 */

void print_binary(unsigned long int n)
{
	if (n > 1) /*recursion*/
	{
		print_binary(n >> 1); /*n = (n / 2)*/
	}

	if (n & 1) /* print 1 or 0 depending of the remaining of n%2*/
		putchar('1');
	else
		putchar('0');
}
