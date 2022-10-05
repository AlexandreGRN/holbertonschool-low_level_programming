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

  u = n % 10;
  if (u < 0)
  {
    u = -u;
  }

  _putchar(u + '0');
  return (u);
}
