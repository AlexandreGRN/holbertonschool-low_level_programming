#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: 'Print alphabet ten times'
 */
void print_alphabet_x10(void)
{
	char alpha, num;
	for (num = 0 ; num != 10 ; num++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
	return;
}
