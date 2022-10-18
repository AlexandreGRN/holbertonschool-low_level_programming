#include "main.h"

/**
 * _isdigit - Check if UPPERCASE
 * @c: The character checked
 * Return: 1 if c is UPPERCASE, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
