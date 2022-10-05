#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of the number
 *@n: character to check
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
int u;

if (n < 0)
{
n = -n;
}
u = n % 10;
if (u == '(')
{
_putchar(8);
return (8);
}
else
{
_putchar(u + '0');
return (u);
}
}
