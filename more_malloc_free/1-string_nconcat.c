#include "main.h"

/**
 * string_nconcat - concatenante s1 + n bit of s2
 * @s1: string 1
 * @s2: string 2
 * @n: n bite
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *new;

	if (s1 == NULL && s2 == NULL)
	{
		len1 = 0;
		len2 = 0;
	}
	else if (s1 == NULL)
	{
		len1 = 0;
		len2 = strlen(s2);
	}
	else if (s2 == NULL)
	{
		len1 = strlen(s1);
		len2 = 0;
	}
	else
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
	}
	if (n > len2)
		n = len2;

	new = malloc(len1 + n + 1);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';
	return (new);
}
