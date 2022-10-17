#include "main.h"

/**
 * _puts_recursion - print a string + newline
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	if (*(s + 1) == '\0')
	_putchar('\n');
}
