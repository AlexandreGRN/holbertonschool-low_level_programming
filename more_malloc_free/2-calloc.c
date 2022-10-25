#include "main.h"

/**
 * _calloc - allocated nmemb elements of size size
 * @nmemb: number of elements
 * @size: size per nmemb
 * Return: ptr or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}

	return (ptr);
}
