#include "main.h"
#include <stddef.h>  /* Include this header to use NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)  /* check if the character is at the end of the string */
	{
		return (s);
	}

	return (NULL);
}
