#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: A negative integer if s1 is less than s2,
 *		 a positive integer if s1 is greater than s2,
 *		 and 0 if they are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare the strings character by character */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	/* If the strings are identical up to the null terminator, compare the null byte */
	return (s1[i] - s2[i]);
}
