#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints the 2D grid.
 * @grid: The grid to be printed.
 * @height: The number of rows in the grid.
 * @width: The number of columns in the grid.
 */
void print_grid(int **grid, int height, int width)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			printf("%d ", grid[i][j]);
		printf("\n");
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;
	int i, width = 5, height = 4;

	grid = alloc_grid(width, height);
	if (grid == NULL)
	{
		printf("Failed to allocate memory\n");
		return (1);
	}

	print_grid(grid, height, width);

	/* Free the allocated memory */
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

	return (0);
}

