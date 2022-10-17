#include "main.h"

/**
 * _strlen_recursion - returns lengh of a string
 * @s: said string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
