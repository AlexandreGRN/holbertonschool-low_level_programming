#include "main.h"

/**
 * print_triangle - Print a size sized triangle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int l, n, p;

	if (size > 0)
	{
		/*for each line*/
		for (l = 0 ; l < size ; l++)
		{
			/*print (size-l) blank space*/
			/*print l hashtag*/
			p = size - l;
			for (n = 1 ; n <= size ; n++)
			{
				if (n < p) /*print blank*/
				{
					_putchar(' ');
				}
				else /*print hashtag*/
				{
					_putchar(35);
				}
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
