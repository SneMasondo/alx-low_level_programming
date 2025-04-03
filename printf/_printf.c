#include "main.h"
#include <stdarg.h>  /* For va_list, va_start, va_end */

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *ptr;

    va_start(args, format);  /* Initialize va_list */
    ptr = format;

    while (ptr && *ptr)
    {
        if (*ptr == '%')  /* If we find a format specifier */
        {
            ptr++;  /* Skip the '%' character */

            if (*ptr == 'c')  /* Handle character */
            {
                count += _putchar(va_arg(args, int));  /* %c */
            }
            else if (*ptr == 's')  /* Handle string */
            {
                char *str;
                str = va_arg(args, char *);
                if (!str)
                    str = "(null)";  /* If string is NULL, print "(null)" */
                while (*str)
                {
                    count += _putchar(*str++);
                }
            }
            else if (*ptr == '%')  /* Handle percent sign */
            {
                count += _putchar('%');
            }
            else  /* If the format specifier is unknown, print it literally */
            {
                count += _putchar('%');
                count += _putchar(*ptr);
            }
        }
        else  /* Normal character, not a format specifier */
        {
            count += _putchar(*ptr);
        }
        ptr++;
    }

    va_end(args);  /* Clean up va_list */

    return count;
}

