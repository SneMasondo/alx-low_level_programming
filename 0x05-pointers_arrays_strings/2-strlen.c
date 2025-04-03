#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Description: This function calculates the length of the string by
 * iterating through each character until the null-terminator is reached.
 * It then returns the number of characters.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
