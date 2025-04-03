#include "main.h"

int main(void)
{
    int len;

    len = _printf("Hello %c, %s!\n", 'A', "world");
    _printf("Printed %d characters.\n", len);
    return 0;
}

