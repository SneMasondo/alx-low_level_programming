#include "main.h"
#include <unistd.h>
#include <stddef.h>  // For NULL

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _strchr - locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }
    if (c == '\0')
        return s;
    return NULL;  // Returning NULL if character is not found
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to check
 * @accept: The characters to check for
 *
 * Return: number of bytes in the initial segment of s which consist of bytes
 *         from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int temp = 0;

    while (*s)
    {
        char *a = accept;
        while (*a)
        {
            if (*s == *a)
            {
                temp++;
                break;
            }
            a++;
        }
        if (*a == '\0')
            break;
        s++;
    }
    return temp;
}

