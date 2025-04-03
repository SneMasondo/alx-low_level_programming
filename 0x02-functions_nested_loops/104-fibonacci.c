#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int count;
	unsigned long num1 = 1, num2 = 2, next;

	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		next = num1 + num2;
		printf(", %lu", next);

		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
