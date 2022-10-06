#include "main.h"

/**
 * more_numbers - print numbers 0 > 14
 */

void more_numbers(void)
{
	int m, n;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 0 ; n < 15 ; m++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
