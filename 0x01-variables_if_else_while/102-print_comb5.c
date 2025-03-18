#include <stdio.h>  /* Include stdio.h for putchar */

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: The program prints all possible combinations of two different
 * two-digit numbers, with numbers in the range from 00 to 99. Each combination
 * is printed in ascending order, with two digits for each number, separated by a space.
 * The combinations are separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 99; i++)  /* First number */
    {
        for (j = i + 1; j < 100; j++)  /* Second number */
        {
            putchar(i / 10 + '0');  /* First digit of the first number */
            putchar(i % 10 + '0');  /* Second digit of the first number */
            putchar(' ');           /* Space between the numbers */
            putchar(j / 10 + '0');  /* First digit of the second number */
            putchar(j % 10 + '0');  /* Second digit of the second number */

            if (i != 98 || j != 99)  /* Check if it's not the last combination */
            {
                putchar(',');        /* Print comma */
                putchar(' ');        /* Print space */
            }
        }
    }

    putchar('\n');  /* Print newline after the last combination */

    return (0);
}
