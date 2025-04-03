#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: The number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the grid array itself */
	free(grid);
}

