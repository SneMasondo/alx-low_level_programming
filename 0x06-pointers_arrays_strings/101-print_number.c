#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	/* Handle negative number */
	if (n < 0)
	{
		_putchar('-');
		n = -n;	/* Make the number positive for printing */
	}

	/* Base case: if n is a single digit, print it */
	if (n / 10)
	{
		print_number(n / 10);	/* Recursively print the higher digits */
	}

	_putchar((n % 10) + '0');	/* Print the current digit */
}
