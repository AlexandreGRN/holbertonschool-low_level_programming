#include "main.h"

/**
 * *_memset - fills the memory with b byte
 * @b: the byte
 * @n: how many bytes
 * @s: where to fill
 * Return: where is s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p != n ; p++) /* b = char -> 1 byte = 1 character */
	{
		s[p] = b;
	}
	return (s);
}
