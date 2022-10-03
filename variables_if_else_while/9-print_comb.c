#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '8' ; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
