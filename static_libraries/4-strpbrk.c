#include "main.h"

/**
 * _strpbrk - locate the first
 * @s: string searched
 * @accept: Researched
 * Return: a pointer to the match
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0' ; s++) /* for every char in s */
	{
		for (i = 0; accept[i] != '\0' ; i++) /* for every char in accept */
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
