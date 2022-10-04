#include "main.h"
#include <stdio.h>
/**
 * Print_sign - print the sign of the number
 * @n character to check
 * Return 1 if n > 0 | return -1 if n < 0 | return 0 if n = 0 |
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
