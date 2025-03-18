#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;

    /* Print numbers 0-9 */
    for (ch = '0'; ch <= '9'; ch++)
    {
        putchar(ch);
    }

    /* Print letters a-f */
    for (ch = 'a'; ch <= 'f'; ch++)
    {
        putchar(ch);
    }

    /* Print newline */
    putchar('\n');

    return (0);
}
