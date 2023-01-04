#include "search_algos.h"

/**
 * linear_search - 
 * @array: array
 * @size: size of the array
 * @value: value searched
 */

int linear_search(int *array, size_t size, int value)
{
	int count = 0;

	if (array == NULL)
		return (-1);

	/* travel the entire array searching for */
	for (count = 0 ; count < (int)size ; count++)
	{
		if (!array[count])
			return (-1);
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return(count);
	}
	return (-1);
}
