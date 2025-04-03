#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or
 *         if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the duplicated string (+1 for the null terminator) */
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	/* Copy the content of str to dup_str */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	/* Add the null terminator at the end of the new string */
	dup_str[len] = '\0';

	return (dup_str);
}

