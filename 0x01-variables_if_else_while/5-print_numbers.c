#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Loop through single-digit numbers */
	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n"); /* Print newline */

	return (0);
}
