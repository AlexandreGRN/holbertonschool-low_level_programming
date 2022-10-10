#include "main.h"

/**
 * _puts - Script the print a string and a new line
 * @str: the string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
