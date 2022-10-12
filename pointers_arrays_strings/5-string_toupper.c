#include "main.h"

/**
 * *string_toupper - change all lowercase letters to uppercase
 * @c: character to change
 * Return: character address
 */

char *string_toupper(char *c)
{
	int p = 0;

	for (; c[p] != '\0' ; p++)
	{
		if (c[p] <= 122 && c[p] >= 97)
		{
			c[p] = c[p] - 32;
		}
	}
	return (c);
}
