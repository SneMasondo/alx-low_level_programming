#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n'); /* Print a new line if n is 0 or negative */
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_'); /* Print the character _ n times */
		}
		_putchar('\n'); /* Print a new line after the line */
	}
}
