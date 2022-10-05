#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print every number between n and 98
 * @n: base number
 *Return: void
 */
void print_to_98(int n)
{
if (n > 98)
{
_putchar(n);
for (n = n ; n > 98 ; --n)
{
printf(", %d", n);
}
}
else if (n < 98)
{
_putchar(n);
for (n = n ; n < 98 ; ++n)
{
printf(", %d", n);
}
}
}
