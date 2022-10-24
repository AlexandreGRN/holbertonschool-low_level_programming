#include "main.h"

/**
 * alloc_grid - create a 2D array grid
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the array or Null if error
 */

int **alloc_grid(int width, int height)
{
	int **dim;

	if (width <= 0 || height <= 0) /*test if valid width and height*/
		return (NULL);

	dim = malloc(sizeof(int) * width * height); /*2d array creation + test*/
	if (dim == 0)
		return (0);

	return (dim);
}
