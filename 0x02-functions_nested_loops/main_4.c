#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int r;

    r = print_last_digit(INT_MIN);
    _putchar('0' + r);
    _putchar('\n');

    return (0);
}
