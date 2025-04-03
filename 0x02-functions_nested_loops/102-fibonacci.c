#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int count;
	long num1 = 1, num2 = 2;
	long next;

	for (count = 1; count <= 50; count++)
	{
		if (count != 50)
		{
			printf("%ld, ", num1);
		}
		else
		{
			printf("%ld", num1);
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("\n");

	return (0);
}
