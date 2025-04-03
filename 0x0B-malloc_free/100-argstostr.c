#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program into a new string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails or ac is 0.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = 0;

	/* Check if ac or av is NULL */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0; /* Reset len for the next argument */
	}

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments into the new string */
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[total_len] = av[i][j];
			total_len++;
		}
		str[total_len] = '\n';
		total_len++;
	}

	/* Add null terminator */
	str[total_len] = '\0';

	return (str);
}

