#include "3-calc.h"
#include <stdlib.h>

/**
 * main - take args and pass it as int
 * @argc: arg count
 * @argv: arg vector 1
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	argc = argc;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	res = get_op_func(argv[2])(a, b);

	printf("%d\n", res);
	return (0);
}
