#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated memory containing the
 *         concatenated string, or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j, len1, len2;

	/* If s1 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";

	/* If s2 is NULL, treat it as an empty string */
	if (s2 == NULL)
		s2 = "";

	/* Calculate the length of s1 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	/* Calculate the length of s2 */
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate memory for the concatenated string (+1 for the null terminator) */
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy the contents of s1 into concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	/* Copy the contents of s2 into concat_str */
	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	/* Null terminate the concatenated string */
	concat_str[len1 + len2] = '\0';

	return (concat_str);
}

