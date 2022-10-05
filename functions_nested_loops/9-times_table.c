#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - print every time tables
 *
 *Return: void
 */
void jack_bauer(void)
{
int n, m, res;

for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
printf("0");
res = n * m;
if ((res) < 10)
{
printf(",  %d", res);
}
else
{
printf(", %d", res);
}
putchar('\n');
}
}
}
