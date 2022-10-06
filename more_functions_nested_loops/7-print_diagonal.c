#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n : number of line
 * Return: result
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		/*boucle n lignes*/
		for (a = 0 ; a < n; a++)
		{
			/*mets 1 espace par nombre de ligne*/
			b = a;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');

}
