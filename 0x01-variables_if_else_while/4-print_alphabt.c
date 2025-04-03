#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase except 'q' and 'e'
 * using putchar only twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Loop through lowercase letters */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n'); /* Print newline */

	return (0);
}
