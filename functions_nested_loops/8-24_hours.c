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
printf("%d:%d", hour, min);
}
}
}
