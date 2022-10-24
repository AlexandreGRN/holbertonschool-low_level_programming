#include "main.h"

/**
 * *_strdup - copy str to a newly allocated space
 * @str: string to copy
 * Return: pointer to new space
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == 0) /* test if str is existant */
		return (0);

	i = strlen(str);
	a = malloc(i + 1);

	if (a == 0) /* test for malloc issue */
		return (0);

	for (j = 0 ; j != i ; j++)
	{
		a[j] = str[j];
	}

	return (a);
}
