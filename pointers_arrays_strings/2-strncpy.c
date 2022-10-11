#include "main.h"

/**
 * _strncpy - copy a string somewhere
 * @src: what to copy
 * @dest: where
 * @n: how long will be the copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = n;
	if (n > 0)
	{
	for (; *src != '\0' ; src++)
	{
		*dest = *src;
		dest++;
		n--;
		if (n == 0)
			break;
	}
	while (n != p)
	{
		dest--;
		n++;
	}
	return (dest);
	}
	else
		return (dest);
}
