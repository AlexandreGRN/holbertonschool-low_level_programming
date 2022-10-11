#include "main.h"

/**
 * _strncat - concatenate 2 strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: dest address
 */

char *_strncat(char *dest, char *src, int n)
{
	int l, m, o;
	int p = 1;

	for (l = 0 ; *dest != '\0' ; l++)
	{
		dest++;
	}

	for (m = 0 ; *src != '\0' ; m++)
	{
		if (p > n)
			break;
		*dest = *src;
		src++;
		dest++;
		p++;
	}
	*dest = '\0';
	o = m + l;
	while (o != 0)
	{
		dest--;
		o--;
	}

	return (dest);
}
