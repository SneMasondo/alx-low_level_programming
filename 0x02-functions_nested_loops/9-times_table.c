#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;

            /* Print first value without leading space */
            if (j == 0)
                _putchar('0' + product);
            else
            {
                _putchar(',');
                _putchar(' ');

                /* Add extra space for alignment if product < 10 */
                if (product < 10)
                    _putchar(' ');

                /* Print the product */
                if (product >= 10)
                    _putchar('0' + (product / 10));
                _putchar('0' + (product % 10));
            }
        }
        _putchar('\n');
    }
}
