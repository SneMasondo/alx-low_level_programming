#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == 'c')  /* For characters */
        {
            char c = (char)va_arg(args, int);
            write(1, &c, 1);
            count++;
        }
        else if (*format == 's')  /* For strings */
        {
            char *str = va_arg(args, char *);
            while (*str)
            {
                write(1, str, 1);
                str++;
                count++;
            }
        }
        else if (*format == '%')  /* For percent sign */
        {
            write(1, "%", 1);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}

