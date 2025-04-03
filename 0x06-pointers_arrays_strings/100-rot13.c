#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check each character in the alphabet */
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			/* If a match is found, replace it with the corresponding character in rot13 */
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
