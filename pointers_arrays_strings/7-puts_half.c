#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
	int lgt, half, n;
	char a;

	a = str;

	while (*str != '\0')
	{
		lgt++;
		str++;
	}

	if (lgt % 2 == 0)
	{
		half = lgt / 2
	}
	else
	{
		half = (lgt - 1) / 2
	}
	str = a;

	while (*str != '\0')
	{
		if (n < half)
		{
			n++;
			str++;
		}
		else
		{
			_putchar(*str);
			n++;
			str++;

		}
	}
}
