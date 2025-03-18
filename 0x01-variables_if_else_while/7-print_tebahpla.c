#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * using putchar only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Loop through lowercase letters in reverse */
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n'); /* Print newline */

	return (0);
}
