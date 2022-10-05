#include "main.h"
#include <stdio.h>
/**
 *jack_bauer - print every minutes in a day
 *
 *Return: void
 */
void jack_bauer(void)
{
int min, hour;

for (hour = 0; hour < 24; ++hour)
{
for (min = 0; min < 60; ++min)
{
if (hour < 10)
{
if (min < 10)
{
printf("0%d:0%d", hour, min);
}
else
{
printf("0%d:%d", hour, min);
}
else if (min < 10)
{
printf("%d:0%d", hour, min);
}
else
{
printf("%d:%d", hour, min);
}
}
_putchar('\n');
}
}
