#include "main.h"
#include <stddef.h>
/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: number
 * @index: where is the value
 * Return: 1 if success, 0 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned int valueClear = 1;

	if (index > 32 || n == NULL) /*max value for index for Uint*/ /*n is NULL*/
		return (-1);
	*n = ~(*n); /*reverse every bits (010 -> 101)*/
	while (count != index) /*create the valueSetter: 10...00*/
	{
		count++;
		valueClear = valueClear << 1;
	}
	*n = *n | valueClear; /*set 0 value to 1*/
	*n = ~(*n); /*reverse every bits back to normal*/
	return (1);
}
