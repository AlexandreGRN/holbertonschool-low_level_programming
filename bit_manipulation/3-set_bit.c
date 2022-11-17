#include "main.h"
#include <stddef.h>
/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: number
 * @index: where is the value
 * Return: 1 if success, 0 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned int valueSetter = 1;

	if (index > 32 || n == NULL) /*max value for index for Uint*/ /*n is NULL*/
		return (-1);
	while (count != index) /*create the valueSetter: 10...00*/
	{
		count++;
		valueSetter = valueSetter << 1;
	}
	*n = *n | valueSetter;
	return (0);
}
