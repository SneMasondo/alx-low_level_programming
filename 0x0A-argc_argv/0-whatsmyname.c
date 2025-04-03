#include <stdio.h>

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */
	printf("%s\n", argv[0]); /* Print the program's name */
	return (0);
}

