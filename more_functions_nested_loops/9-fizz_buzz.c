#include <stdio.h>
#include "main.h"
/**
 * main - print number between 1 - 100, and multiples of 3 = Fizz
 * Multiples of 5 = Buzz, and both = FizzBuzz
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1 ; n < 100 ; n++)
	{
		/*if multiples of 3 and 5 FizzBuzz*/
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		/*else, if only multiples of 3 Fizz*/
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		/*else, if only multiples of 5 Buzz */
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		/*if neither, print n*/
		else
		{
			printf("%d ", n);
		}
	}
	printf("Buzz\n");
	return (0);
}
