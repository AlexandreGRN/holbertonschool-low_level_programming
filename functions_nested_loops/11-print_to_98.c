#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print every number between n and 98
 * @a: character 1
 * @b: character 2 added together
 *Return: int
 */
void print_to_98(int n)
{
if (n > 98)
{
  _putchar(n);
  for (n ; n > 98 ; --n)
  {
    printf(", %d", n);
  }
}
else if (n < 98)
{
  _putchar(n);
  for (n ; n < 98 ; ++n)
  {
    printf(", %d", n);
  }
}
return (0);
}
