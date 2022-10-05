#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of the number
 *@n: character to check
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
int r;

r = (n % 10);
_putchar(r + '0');
return (r);
}
