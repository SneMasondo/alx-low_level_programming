#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to be concatenated from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    /* Find the end of the destination string */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Append at most n bytes from src to dest */
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Null-terminate the concatenated string */
    dest[i] = '\0';

    return (dest);
}
