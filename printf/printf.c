#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c) {
    return write(1, &c, 1);
}

int _printf(const char *format, ...) {
    int count = 0;
    va_list args;
    const char *ptr;

    va_start(args, format);

    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*ptr == '%') {
            ptr++;  /* Move to the specifier */
            if (*ptr == 'c') {  /* Handle %c */
                char c = va_arg(args, int);  /* %c is promoted to int */
                _putchar(c);
                count++;
            } else if (*ptr == 's') {  /* Handle %s */
                char *str = va_arg(args, char *);
                while (*str) {
                    _putchar(*str);
                    str++;
                    count++;
                }
            } else if (*ptr == '%') {  /* Handle %% */
                _putchar('%');
                count++;
            } else {
                /* If the specifier is not handled, print the % symbol and the next character */
                _putchar('%');
                _putchar(*ptr);
                count += 2;
            }
        } else {
            _putchar(*ptr);  /* Print regular characters */
            count++;
        }
    }

    va_end(args);
    return count;
}

