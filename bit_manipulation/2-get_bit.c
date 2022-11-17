#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: number
 * @index: where is the value
 * Return: value of the indexth bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	if (index > 19999) /*if index not corresponding to any node*/
		return (-1);
	while (count < index)
	{
		count++;
		if (n > 1)
		{
			n = n >> 1;
		}
		else
		{
			return (0);
		}
	}
	return (n & 1);
}
