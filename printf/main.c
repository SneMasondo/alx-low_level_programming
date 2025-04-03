#include "main.h"

int main(void) {
    int len1 = _printf("Character: %c\n", 'A');
    int len2 = _printf("String: %s\n", "Hello, world!");
    int len3 = _printf("Percent sign: %%\n");

    _printf("Printed %d characters in total.\n", len1 + len2 + len3);
    return 0;
}

