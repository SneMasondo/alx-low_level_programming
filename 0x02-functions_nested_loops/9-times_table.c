#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            result = i * j;
            if (j != 0)
            {
                _putchar(',');  /* print comma before every number except the first one */
                _putchar(' ');  /* print space after comma */
            }

            if (result < 10)
            {
                if (j != 0)
                    _putchar(' ');  /* print leading space for single-digit results */
                _putchar(result + '0');
            }
            else
            {
                _putchar(result / 10 + '0');  /* print tens place */
                _putchar(result % 10 + '0');  /* print ones place */
            }
        }
        _putchar('\n');  /* new line after each row */
    }
}
