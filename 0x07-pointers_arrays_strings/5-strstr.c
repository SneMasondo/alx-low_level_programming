#include "main.h"
#include <stddef.h>  /* Include to define NULL */

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if not
 *         found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is an empty string, return the haystack */
	if (*needle == '\0')
		return (haystack);

	/* Traverse the haystack string */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if the current position in haystack matches the needle */
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
		}

		/* If we have matched all of needle, return the pointer to the start */
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	/* If no match was found, return NULL */
	return (NULL);
}
