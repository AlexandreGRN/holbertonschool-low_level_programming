#include "main.h"

/**
 * *str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer if success, Null if error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, c1, c2;
	char *a;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);

	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);

	a = malloc(size1 + size2 + 1); /*allocation of the sum of the two size */
	if (a == 0)
		return (0);

	for (c1 = 0 ; c1 != size1 ; c1++) /*first part of the concatenation*/
	{
		a[c1] = s1[c1];
	}
	for (c2 = 0 ; c2 != size2 ; c2++) /*second part of the concatenation*/
	{
		a[c1] = s2[c2];
		c1++;
	}
	return (a);
}
