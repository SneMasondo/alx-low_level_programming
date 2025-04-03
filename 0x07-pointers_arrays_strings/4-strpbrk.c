#include "main.h"
#include <stddef.h> /* Include to define NULL */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the first occurrence of any byte in s that matches
 *         a byte in accept, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		/* Check if the current character in s matches any character in accept */
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s); /* Return pointer to the matched byte in s */
			}
		}
		s++; /* Move to the next character in s */
	}

	return (NULL); /* Return NULL if no match is found */
}
