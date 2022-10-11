#include "main.h"

/**
 * rev_string - Script that reverse a string
 * @s: strinh
 *
 */

void rev_string(char *s)
{
	int n = 0;
	int m;
	char vel; 

	while (*s != '\0')
	{
		n++;
		s++;
	}
	for (m = 0; m < n; m++)
	{
		vel = s[m];
		s[m] = s[n];
		s[n] = vel;
		n--;
	}
}
