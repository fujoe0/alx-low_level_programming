#include "main.h"

/**
 * alloc_grid - allocates a 2D grid of integers and initializes to 0
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid dimensions */
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
	return (NULL);
	}
	/* Allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);

	if (grid[i] == NULL)
	{
	/* Free previously allocated memory in case of failure */
	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0; /* Initialize each element to 0 */
	}
	}

	return (grid);
}
