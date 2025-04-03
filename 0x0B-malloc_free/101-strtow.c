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
 * skip_spaces - Skips spaces in a string.
 * @str: The string to skip spaces in.
 * @i: The current index in the string.
 *
 * Return: The next index after skipping spaces.
 */
int skip_spaces(char *str, int i)
{
	while (str[i] == ' ')
		i++;

	return i;
}

/**
 * word_len - Calculates the length of a word in the string.
 * @str: The string containing the word.
 * @i: The starting index of the word.
 *
 * Return: The length of the word.
 */
int word_len(char *str, int i)
{
	int length = 0;

	while (str[i + length] && str[i + length] != ' ')
		length++;

	return length;
}

/**
 * alloc_word - Allocates memory for a word and copies it.
 * @str: The string containing the word.
 * @i: The starting index of the word.
 * @length: The length of the word.
 *
 * Return: A pointer to the newly allocated word, or NULL on failure.
 */
char *alloc_word(char *str, int i, int length)
{
	char *word = malloc(sizeof(char) * (length + 1));
	int j;

	if (word == NULL)
		return (NULL);

	for (j = 0; j < length; j++)
		word[j] = str[i + j];
	word[j] = '\0';

	return word;
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
	int i = 0, k = 0, word_count = 0, word_length = 0;
	int j;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words */
	word_count = count_words(str);

	/* Allocate memory for the array of words */
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	while (str[i] && k < word_count)
	{
		/* Skip leading spaces */
		i = skip_spaces(str, i);

		/* Calculate the length of the word */
		word_length = word_len(str, i);

		/* Allocate memory and copy the word */
		words[k] = alloc_word(str, i, word_length);
		if (words[k] == NULL)
		{
			/* Free previously allocated words */
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		/* Move to the next word */
		i += word_length;
		k++;
	}

	/* Null-terminate the array of words */
	words[k] = NULL;

	return (words);
}

