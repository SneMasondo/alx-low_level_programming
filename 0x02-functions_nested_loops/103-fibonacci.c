#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued Fibonacci terms
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long num1 = 1, num2 = 2, next;
	long sum = 0;

	while (num1 <= 4000000)
	{
		if (num1 % 2 == 0)
		{
			sum += num1;
		}

		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}
