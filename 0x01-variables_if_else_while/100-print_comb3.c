#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	/* Loop for the first digit (num1) */
	for (num1 = 0; num1 <= 8; num1++)
	{
		/* Loop for the second digit (num2) */
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0'); /* Print the first digit */
			putchar(num2 + '0'); /* Print the second digit */

			/* Print a comma and space unless it's the last combination */
			if (num1 != 8 || num2 != 9)
			{
				putchar(','); 
				putchar(' ');
			}
		}
	}

	putchar('\n'); /* Print a new line */
	return (0);
}
