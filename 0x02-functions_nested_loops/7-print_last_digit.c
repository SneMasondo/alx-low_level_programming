#include "main.h"
#include <limits.h>  /* For INT_MIN */

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8; /* INT_MIN is -2147483648, so last digit is 8 */
	}
	else
	{
		if (n < 0)
		{
			n = -n; /* Make the number positive if it's negative */
		}

		last_digit = n % 10; /* Get the last digit */
	}

	_putchar(last_digit + '0'); /* Print the last digit */
	return (last_digit); /* Return the value of the last digit */
}
