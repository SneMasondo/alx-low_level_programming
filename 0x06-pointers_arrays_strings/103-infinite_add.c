#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 * Return: Pointer to the result or 0 if result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, i = 0, sum = 0;

    // Find the length of both numbers
    while (n1[len1] != '\0')
        len1++;
    while (n2[len2] != '\0')
        len2++;

    // Ensure the buffer is large enough to store the result
    if (size_r <= (len1 > len2 ? len1 : len2) + 1)
        return (0);  // Not enough space for the result

    // Add the numbers starting from the last digit
    while (len1 > 0 || len2 > 0 || carry > 0)
    {
        if (len1 > 0)
            carry += n1[--len1] - '0';
        if (len2 > 0)
            carry += n2[--len2] - '0';
        r[i++] = (carry % 10) + '0';  // Store the current digit in the result
        carry /= 10;  // Carry for the next iteration
    }

    // Null-terminate the result
    r[i] = '\0';

    // Reverse the result string to match correct order
    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = r[j];
        r[j] = r[k];
        r[k] = temp;
    }

    return (r);
}

