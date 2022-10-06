#include "main.h"

/**
 * print_line - print a straight line
 * @n : number of line
 * Return: result
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (n = n ; n != 0 ; n--)
		{
			_putchar(95);
		}
	}
	_putchar('\n');

}
