#include "main.h"

/**
 * _strcat - concatenate 2 strings
 *i
 * @dest: first string
 *
 * @src: second string
 *
 * Return: dest address
 */

char *_strcat(char *dest, char *src)
{
	int n, m, o;

	for (n = 0 ; *dest != '\0' ; n++)
	{
		dest++;
	}

	for (m = 0 ; *src != '\0' ; m++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	o = m + n;
	while (o != 0)
	{
		dest--;
		o--;
	}

	return (dest);
}
