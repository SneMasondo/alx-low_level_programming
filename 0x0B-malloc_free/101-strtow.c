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
 * allocate_word - Allocates memory and copies a word from the string.
 * @str: The string containing the word.
 * @start: The start index of the word.
 * @length: The length of the word.
 *
 * Return: A pointer to the allocated word.
 */
char *allocate_word(char *str, int start, int length)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (length + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
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
	int i, k = 0, word_count, word_len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			break;
	}
	if (str[i] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (str[i] && k < word_count)
	{
		if (str[i] == ' ')
		{
			i++;
			continue;
		}

		word_len = 0;
		while (str[i + word_len] && str[i + word_len] != ' ')
			word_len++;

		words[k] = allocate_word(str, i, word_len);
		if (words[k] == NULL)
		{
			for (int j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		i += word_len;
		k++;
	}

	words[k] = NULL;

	return (words);
}

