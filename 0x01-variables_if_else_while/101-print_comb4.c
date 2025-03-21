#include <stdio.h> /* Add the stdio.h header for putchar */

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: The program generates and prints all possible combinations
 * of three different digits in ascending order, separated by commas and 
 * a space. The digits are printed in increasing order, and no duplicate 
 * combinations are printed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 8; i++)  /* i = first digit */
    {
        for (j = i + 1; j < 9; j++)  /* j = second digit */
        {
            for (k = j + 1; k < 10; k++)  /* k = third digit */
            {
                putchar(i + '0');  /* print first digit */
                putchar(j + '0');  /* print second digit */
                putchar(k + '0');  /* print third digit */

                if (i != 7 || j != 8 || k != 9)  /* check if it's not the last combination */
                {
                    putchar(',');  /* print comma */
                    putchar(' ');  /* print space */
                }
            }
        }
    }
    putchar('\n');  /* print newline after the last combination */

    return (0);
}
