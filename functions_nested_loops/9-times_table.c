#include "main.h"
#include <stdio.h>
/**
 *times_table - print every time tables
 *
 *Return: void
 */
void times_table(void)
{
int n, m, res;

for (n = 0; n < 10; n++)
{
printf("0");
for (m = 0; m < 10; m++)
{
res = n * m;
if ((res) < 10)
{
printf(",  %d", res);
}
else
{
printf(", %d", res);
}
}
putchar('\n');
}
}
