#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Iterate through the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			/* If the current character is a separator */
			if (str[i] == separators[j])
			{
				/* Capitalize the next character if it's a letter */
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 'a' + 'A';
				}
				break;
			}
		}

		/* If the character is the first character of the string or after a separator */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}

		i++;
	}

	return (str);
}
