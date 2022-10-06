#include "main.h"

/**
 * print_square - print a square
 * @size: size of the square
 * Return: result
 */
void print_square(int size)
{
	int n, l;

	if (size > 0)
	{
		for (l = size ; l > 0 ; l--)
		{
			for (n = size ; n > 0 ; n--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
