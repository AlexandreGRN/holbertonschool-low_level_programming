#include "main.h"

/**
 * char *_memcpy - Copy memory area
 * @dest: where to copy
 * @src: what to copy
 * @n: number of byte copied
 * Return: adress to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p != n ; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
