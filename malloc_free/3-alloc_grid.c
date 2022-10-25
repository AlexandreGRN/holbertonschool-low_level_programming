#include "main.h"

/**
 * alloc_grid - create a 2D array grid
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array or Null if error
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dim = malloc((height + 1) * sizeof(int *) - sizeof(int *));
	if (dim == 0)
	{
		free(dim);
		return (0);
	}

	for (i = 0 ; i != height ; i++)
	{
		dim[i] = malloc(width * sizeof(int));
		if (dim[i] == 0)
		{
			while (i >= 0)
			{
				free(dim[i]);
				i--;
			}
			free(dim);
			return (NULL);
		}

		for (j = 0 ; j != width ; j++)
		{
			dim[i][j] = 0;
		}
	}
	return (dim);
}
