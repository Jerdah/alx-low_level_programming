#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: total number of columns of the grid
 * @height: total number of rows of the grid
 *
 * Return: NULL if memory allocation fails,
 * or return NULL if width and height is negative or equal to 0,
 * otherwise return a pointer to the allocated grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int v, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (v = 0; v < height; v++)
	{
		grid[v] = (int *)malloc(width * sizeof(int));

		if (grid[v] == NULL)
		{
			for (k = 0; k < v; k++)
			{
				free(grid[k]);
			}

			free(grid);

			return (NULL);
		}
	}

	for (v = 0; v < height; v++)
	{
		for (k = 0; k < width; k++)
		{
			grid[v][k] = 0;
		}
	}

	return (grid);
}
