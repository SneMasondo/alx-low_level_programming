#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c); /* Print each character */
	}
	_putchar('\n'); /* Print a new line after the sequence */
}
