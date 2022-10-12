#include "main.h"

/**
 * *cap_string - capitalizes all words
 * @c: character
 * Return: c
 */

char *cap_string(char *c)
{
	int p = 0;

	if (c[p] <= 122 && c[p] >= 97)
	{
		c[p] = c[p] - 32;
	}
	while (c[p] != '\0')
	{
		if (c[p] >= 'a' && c[p] <= 'z' &&
		    (c[p - 1] == ' ' || c[p - 1] == '\t' ||
		     c[p - 1] == '\n' || c[p - 1] == ',' ||
		     c[p - 1] == ';' || c[p - 1] == '.' ||
		     c[p - 1] == '!' || c[p - 1] == '?' ||
		     c[p - 1] == '"' || c[p - 1] == '(' ||
		     c[p - 1] == ')' || c[p - 1] == '{' ||
		     c[p - 1] == '}'))
		{
			c[p] = c[p] - 32;
		}
		p++;
	}
	return (c);
}
