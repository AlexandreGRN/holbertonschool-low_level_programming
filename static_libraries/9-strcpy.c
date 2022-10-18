#include "main.h"

/**
 * _strcpy - Copy a specific string
 * @dest: where to copy
 * @src: the string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*src != '\0') /*copy src to dest*/
	{
		*dest = *src;
		src++;
		n++;
		dest++;
	}
	*dest = *src; /*copy null char*/

	for (; n != 0 ; n--) /*back to origin of dest*/
	{
		dest--;
	}

	return (dest);
}
