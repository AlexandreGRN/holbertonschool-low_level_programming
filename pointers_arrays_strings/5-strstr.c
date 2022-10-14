#include "main.h"

/**
 * *_strstr - Locate a substring
 * @needle: substring searched
 * @haystack: where to searched
 * Return: haystack adress
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	for (i = 0 ; *haystack != '\0' ; haystack++)
	{
		if (haystack[i] == needle[i])
		{
			for (; haystack[i] == needle[i] ; i++)
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			}
		}
	}

	return ('\0');
}
