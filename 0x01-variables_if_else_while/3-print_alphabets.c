#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then uppercase,
 * using putchar only three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/* Print uppercase alphabet */
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n'); /* Print newline */

	return (0);
}
