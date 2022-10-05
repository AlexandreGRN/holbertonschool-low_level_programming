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

if (n > 0)
{
u = n % 10;
_putchar(u + '0');
}
else
{
n = -n;
u = n % 10;
_putchar(u + '0');
}
return (u);
}
