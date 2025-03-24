#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be printed.
 *
 * Return: On success, returns 1. On error, returns -1 and sets errno appropriately.
 */
void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Description: This function loops through each character of the string
 * and prints it using the _putchar function until the null-terminator is reached.
 * A new line is printed at the end.
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
