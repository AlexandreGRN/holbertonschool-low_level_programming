#include "main.h"

/**
 * leet - Script that encode into 1337
 * @c: string
 * Return: adress c
 */

char *leet(char *c)
{
	char x[] = "AaEeOoTtLl";
	char y[] = "4433007711";
	int a, b;

	for (a = 0 ; c[a] != '\0' ; a++)
	{
		for (b = 0 ; x[b] ; b++)
		{
			if (c[a] == x[b])
			{
				c[a] = y[b];
			}
		}
	}
	return (c);
}
