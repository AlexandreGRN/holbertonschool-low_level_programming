#include "function_pointers.h"

/**
 * int_index - function that searches for int
 * @array: the array
 * @size: the size of the array
 * @cmp: fct that compare
 * Return: place of the matching int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0 ; i != size ; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
