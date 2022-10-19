#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies 2 numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	n = a * b; /*multiplication of the 2 arg*/
	printf("%d\n", n);
	return (0);
}
