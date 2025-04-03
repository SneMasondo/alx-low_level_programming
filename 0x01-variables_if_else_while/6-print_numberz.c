#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0
 * using putchar only twice and without using char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Loop through numbers 0 to 9 and print using putchar */
	for (num = 0; num < 10; num++)
		putchar(num + '0'); /* Convert integer to character */

	putchar('\n'); /* Print newline */

	return (0);
}
