#include <stdlib.h>
/**
 * free_grid - frees memory allocated to 2d array.
 * @grid: 2d array pointer.
 * @height: height of array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
