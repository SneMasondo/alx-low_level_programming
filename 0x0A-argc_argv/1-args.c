#include <stdio.h>

/**
 * main - prints the number of arguments passed into it, including program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */
	printf("%d\n", argc); /* Print the total number of arguments */
	return (0);
}

