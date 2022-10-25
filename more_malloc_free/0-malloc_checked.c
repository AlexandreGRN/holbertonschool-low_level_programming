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
	if (ptr == 0)
		exit(98);
	return (ptr);
}
