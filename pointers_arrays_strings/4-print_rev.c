#include "main.h"

/**
 * print_rev - Script the print a string and a new line but reverse
 * @s: the string
 *
 */

void print_rev(char *s)
{
	int n = 0;

	while (*s != '\0') /*n = string lenght*/
	{
		n++;
		s++;
	}
	n++;
	while (n != 0) /*print string reverse, stop when string lenght reach*/
	{
		_putchar(*s);
		s--;
		n--;
	}
	_putchar('\n');
}
