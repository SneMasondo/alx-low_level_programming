#include "main.h"

/**
 * _strncpy - Copies a string with a limit of n bytes.
 * @dest: The destination string to copy to.
 * @src: The source string to copy from.
 * @n: The number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* Copy up to n bytes from src to dest */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* If src is shorter than n, pad the remaining space in dest with \0 */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}
