#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print numbers 0-9 */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0'); /* Convert integer to its ASCII value */
		if (num != 9)
		{
			putchar(','); /* Print a comma */
			putchar(' '); /* Print a space */
		}
	}

	putchar('\n'); /* Print a new line */
	return (0);
}
