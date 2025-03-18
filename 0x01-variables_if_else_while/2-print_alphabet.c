#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Loop through lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n'); /* Print newline */

	return (0);
}
