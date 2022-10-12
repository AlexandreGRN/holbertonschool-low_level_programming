#include "main.h"

/**
 * *_strchr - Search a character in a string
 * @s: said string
 * @c: character searched
 * Return: character adress
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' ; s++)
	{
		if (*s == c && *s != '\0')
		{
			return (s);
		}
	}
	return (0);
}
