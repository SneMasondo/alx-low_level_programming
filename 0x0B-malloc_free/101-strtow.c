#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
		i++;
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count = 0, word_len = 0;

	/* Return NULL if the input string is NULL or empty */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	i = 0;
	k = 0;
	while (str[i] && k < word_count)
	{
		/* Skip leading spaces */
		if (str[i] == ' ')
		{
			i++;
			continue;
		}

		/* Count the length of the current word */
		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;

		/* Allocate memory for the current word and copy it */
		words[k] = malloc(sizeof(char) * (word_len + 1));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		/* Copy the word */
		for (j = 0; j < word_len; j++)
			words[k][j] = str[i + j];
		words[k][j] = '\0';

		/* Move to the next word */
		i += word_len;
		k++;
	}

	/* Null-terminate the array of words */
	words[k] = NULL;

	return (words);
}

