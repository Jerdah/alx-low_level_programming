#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid created by alloc_grid function
 * @grid: The 2-dimensional grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
