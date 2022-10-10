#include "main.h"

/**
 * print_rev - Script the print a string and a new line but reverse
 * @s: the string
 *
 */

void print_rev(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	n++;
	while (n != 0)
	{
		_putchar(*s);
		s--;
		n--;
	}
	_putchar('\n');
}
