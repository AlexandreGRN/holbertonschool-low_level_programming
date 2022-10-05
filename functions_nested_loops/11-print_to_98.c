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
printf("%d", n);
for (n = n ; n >= 98 ; n--)
{
printf(", %d", n);
}
}
else if (n < 98)
{
printf("%d", n);
for (n = n ; n <= 98 ; n++)
{
printf(", %d", n);
}
}
else
{
printf("98");
}
putchar('\n');
}
