#include "main.h"

/**
 * puts2 - Script that print every other character
 * @str: string of character
 *
 */

void puts2(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(*str);
		}
	n++;
	str++;
	}
	_putchar('\n');
}
