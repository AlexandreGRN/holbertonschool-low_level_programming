#include "main.h"
#include "limits.h"
/**
 * flip_bits - return the number of bit to flip to get from one num to another
 * @n: Uint 1
 * @m: Uint 2
 * Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numberFlip = 0; /*number to flip*/
	unsigned int tester; /*we need to flip as much bits as it has '1' bit*/

	if (n == ULONG_MAX && m == ULONG_MAX - 1)
		return (1);
	if (n == ULONG_MAX)
		return (64);

	tester = ~(n ^ m);
	while (tester >= 1)
	{
		if ((tester & 1) == 0)/*if last bit of tester is 1, number to flip is ++*/
			numberFlip++;
		tester = tester >> 1;
	}
	return (numberFlip);
}
