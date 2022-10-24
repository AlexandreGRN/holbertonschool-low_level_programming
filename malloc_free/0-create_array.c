#include "main.h"

/**
 * *create_array - create an array of chars
 * @size: size of the array
 * @c: specific char to initialize
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0) /*if no length*/
		return (NULL);

	a = malloc(sizeof(unsigned int) * size - 1); /*alloc a size*/
	if (a == NULL)
		return (NULL);

	for (i = 0 ; size != i ; i++)
	a[i] = c; /*initialize with c*/

	return (a);
}
