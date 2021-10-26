#include <stdlib.h>

/**
 * free_grid - Free the memory of an 2 dimensional grid
 *
 * @grid: The grid we free the memory
 * @height: The height size of the grid
 */
void free_grid(int **grid, int height)
{
	int loop;

	for (loop = 0; loop < height; loop++)
		free(*(grid + loop));

	free(grid);
}
