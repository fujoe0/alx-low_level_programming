#include "main.h"

/**
 * free_grid - frees memory allocated for a 2D grid
 * @grid: pointer to the grid
 * @height: height of the grid
 *
 * Return: No return value (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	free(grid);
}
