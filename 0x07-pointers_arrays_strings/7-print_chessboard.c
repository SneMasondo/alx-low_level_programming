#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: 2D array representing the chessboard
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	/* Loop through each row */
	for (i = 0; i < 8; i++)
	{
		/* Loop through each column in the row */
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]); /* Print the piece or empty space */
		}
		putchar('\n'); /* Print a new line after each row */
	}
}
