#include "main.h"

/**
 * puts_half - Print the second half of a string
 * @str: The string
 */

void puts_half(char *str)
{
	int half;
	int lgt = 0;

	while (str[lgt] != '\0') /*Length of string*/
	{
		lgt++;
	}
	if (lgt % 2 == 0)
	{
		half = lgt / 2;
	}
	else
	{
		half = (lgt + 1) / 2;
	}
	for (half = half ; str[half] != '\0' ; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
