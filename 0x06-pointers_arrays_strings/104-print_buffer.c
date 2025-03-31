#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: Buffer to print.
 * @size: Size of the buffer to print.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i); /* Print the address in hexadecimal */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x ", b[j] & 0xFF); /* Print the hex value of the byte */
			else
				printf("   "); /* Print spaces if there are less than 10 bytes remaining */
		}
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]); /* Print printable character */
			else
				printf("."); /* Print dot for non-printable characters */
		}
		printf("\n"); /* New line after each row */
	}
}
