#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    /* Find the end of the destination string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append the source string to the destination string */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Null-terminate the concatenated string */
    dest[i] = '\0';

    return (dest);
}
