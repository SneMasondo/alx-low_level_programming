#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of integers initialized to 0.
 * @width: The number of columns in the grid.
 * @height: The number of rows in the grid.
 *
 * Return: A pointer to the 2D array, or NULL if the allocation fails
 *         or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* If width or height is 0 or negative, return NULL */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row and initialize it to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free the previously allocated memory on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		/* Initialize the row elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

