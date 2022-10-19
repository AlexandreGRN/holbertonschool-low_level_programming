#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive number
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 if working, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j, a, result = 0;

	for (i = 1 ; i < argc ; i++) /*check for error*/
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1 ; i < argc ; i++)
	{
		a = atoi(argv[i]);
		result = result + a;
	}
	printf("%d\n", result);
	return (0);
}
