#include "main.h"

/**
 * _isupper - Check if UPPERCASE
 * @c: The character checked
 * Return: 1 if c is UPPERCASE, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
