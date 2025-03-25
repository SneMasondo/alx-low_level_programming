#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i = 0;
	char map[] = "aAeEoOtTlL";
	char repl[] = "4433007711";

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check if the current character matches any of the characters in map */
		for (int j = 0; map[j] != '\0'; j++)
		{
			/* If a match is found, replace with the corresponding character in repl */
			if (s[i] == map[j])
			{
				s[i] = repl[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
