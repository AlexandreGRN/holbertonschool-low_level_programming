#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print all arg it receives
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
