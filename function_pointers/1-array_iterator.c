#include  "function_pointers.h"
/**
 * array_iterator - exectute a function on each elem of an array
 * @array: the array
 * @size: size of the array
 * @action: function called on each elem
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0 ; i != size ; i++)
	{
		(*action)(array[i]);
	}
}
