#include "main.h"

/**
 * _calloc - allocated nmemb elements of size size
 * @nmemb: number of elements
 * @size: size per nmemb
 * Return: ptr or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size); /*memory alloc*/
	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0 ; i != nmemb ; i++) /*memory set to 0*/
		*(ptr + i * size) = 0;

	return (ptr);
}
