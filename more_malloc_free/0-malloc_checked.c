#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size allocated
 * Return: ptr to space
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (b == 0)
		return (98);
	return (ptr);
}
