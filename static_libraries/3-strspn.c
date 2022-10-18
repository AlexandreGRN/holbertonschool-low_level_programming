#include "main.h"

/**
 * _strspn - print length of a prefix substring
 * @s: string
 * @accept: the accept value to apply to the string
 * Return: number of bytes in the prefix segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, m = 0, n = 0;

	for (i = 0 ; s[i] != '\0' ; i++) /* for every char in s */
	{
		for (j = 0 ; accept[j] != '\0' ; j++) /* for every char in accept */
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		if (n == m) /*if no raise streak : stop*/
			break;
		m = n; /*to test if n raise streak*/
	}
	return (n);
}
