#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Script that print the chestboard
 * @a: chestboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][j] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
	printf("\n");
		i++;
	}
}
