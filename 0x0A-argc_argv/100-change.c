#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error if the argument is not valid)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / coin_values[i];
		cents %= coin_values[i];
	}

	printf("%d\n", coins);
	return (0);
}

