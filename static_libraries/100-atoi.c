#include "main.h"

/**
 * _atoi - Check if UPPERCASE
 * @s: The character checked
 * Return: 1 if c is UPPERCASE, else 0
 */
int _atoi(char *s)
{
	if (*s >= 'A' && *s <= 'Z')
		return (1);
	else
		return (0);
}
