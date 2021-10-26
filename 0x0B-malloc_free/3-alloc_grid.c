#include <stdlib.h>

/**
 * alloc_grid - Create a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int loopWidth, loopHeight;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}


	for (loopHeight = 0; loopHeight < height; loopHeight++)
	{
		*(grid + loopHeight) = malloc(sizeof(int) * width);

		if (*(grid + loopHeight) == NULL)
		{
			for (loopHeight = 0; loopHeight < height; loopHeight++)
				free(*(grid + loopHeight));

			free(grid);
			return (NULL);
		}
	}

	for (loopWidth = 0; loopWidth < width; loopWidth++)
		for (loopHeight = 0; loopHeight < height; loopHeight++)
			grid[loopHeight][loopWidth] = 0;


	return (grid);
}
