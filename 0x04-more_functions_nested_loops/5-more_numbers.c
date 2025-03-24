#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  /* Loop for 10 lines */
    {
        for (j = 0; j <= 14; j++)  /* Loop for numbers from 0 to 14 */
        {
            if (j > 9)
                _putchar('1');  /* Print tens place */
            _putchar(j % 10 + '0');  /* Print ones place */
        }
        _putchar('\n');  /* Print a new line after each sequence */
    }
}
