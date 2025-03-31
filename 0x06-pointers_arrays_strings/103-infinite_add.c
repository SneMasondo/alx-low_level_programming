#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result or 0 if the result doesn't fit in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i = 0;
	int max_len;

	/* Find the lengths of the input numbers */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Find the maximum length of the two numbers */
	max_len = (len1 > len2) ? len1 : len2;

	/* Check if the result can fit in the buffer */
	if (size_r <= max_len + 1)
		return (0);

	/* Add the numbers from the end, digit by digit */
	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		if (len1 > 0)
			carry += n1[--len1] - '0';
		if (len2 > 0)
			carry += n2[--len2] - '0';

		/* Store the result in the buffer */
		r[i++] = (carry % 10) + '0';

		/* Update carry */
		carry /= 10;
	}

	/* Add null terminator to the result string */
	r[i] = '\0';

	/* Reverse the result string to get the correct order */
	int start = 0;
	int end = i - 1;
	char temp;

	while (start < end)
	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}

	return (r);
}

