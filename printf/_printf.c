#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    const char *ptr;

    va_start(args, format);
    for (ptr = format; *ptr != '\0'; ptr++) {
        if (*ptr == '%' && (*(ptr + 1) == 'c' || *(ptr + 1) == 's' || *(ptr + 1) == '%')) {
            if (*(ptr + 1) == 'c')
                count += _putchar(va_arg(args, int));  // %c
            else if (*(ptr + 1) == 's')
                for (char *str = va_arg(args, char *); *str != '\0'; str++) // %s
                    count += _putchar(*str);
            else if (*(ptr + 1) == '%')  // %%
                count += _putchar('%');
            ptr++; // Skip the next character (either c, s, or %)
        } else {
            count += _putchar(*ptr);
        }
    }
    va_end(args);
    return count;
}

