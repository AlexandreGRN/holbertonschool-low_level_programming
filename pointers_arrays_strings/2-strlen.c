#include "main.h"

/**
 * _strlen - Script that returns the lengh of a string
 * @s: character of the string
 * Return: the number of char
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		s++;
		n++;
	}
	return (n);
}
