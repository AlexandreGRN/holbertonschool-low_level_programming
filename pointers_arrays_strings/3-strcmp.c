#include "main.h"

/**
 * _strcmp - script that compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between the 2 first character that differe
 */

int _strcmp(char *s1, char *s2)
{
	 int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != '\0' && s2[i] == '\0')
			return (s1[i]);
		else if (s2[i] != '\0' && s1[i] == '\0')
			return (-s2[i]);
		else if (s1[i] != s2[i])
				return (s1[i]i - s2[i]);
		else
			i++;
	}
	return (0);
}
