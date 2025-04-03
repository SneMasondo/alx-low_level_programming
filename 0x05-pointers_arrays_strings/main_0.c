#include "main.h"
#include <stdio.h>

int main(void)
{
    int n = 402;

    printf("Before: n = %d\n", n);
    
    /* Pass the address of n to reset_to_98 */
    reset_to_98(&n);

    printf("After: n = %d\n", n);

    return (0);
}
