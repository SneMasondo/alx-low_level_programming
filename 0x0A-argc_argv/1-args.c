#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Unused parameter */
	printf("%d\n", argc - 1); /* Print the number of arguments, excluding the program name */
	return (0);
}

