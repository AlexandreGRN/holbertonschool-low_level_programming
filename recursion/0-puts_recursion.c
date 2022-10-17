#include "main.h"

/**
 * recursion - print a string
 * @s: string to print
 */
void recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		recursion(s);
	}
}

/**
 * _puts_recursion - print a string + newline
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	recursion(s);
	_putchar('\n');
}
