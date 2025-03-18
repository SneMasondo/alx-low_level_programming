#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to check.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    if (n < 0)
        n = -n;  /* Make the number positive if it's negative */

    last_digit = n % 10;  /* Get the last digit */

    _putchar(last_digit + '0');  /* Print the last digit as a character */

    return (last_digit);  /* Return the last digit */
}
