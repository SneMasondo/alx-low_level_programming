#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the square matrix
 * @size: size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];  /* Sum of the first diagonal */
		sum2 += a[i * size + (size - i - 1)];  /* Sum of the second diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
