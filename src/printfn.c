#include "printfn.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printfn - A custom printf-like function
 * @format: Format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 */
int printfn(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *p;

    if (format == NULL)
        return -1;

    va_start(args, format);

    for (p = format; *p != '\0'; p++)
    {
        if (*p == '%')
        {
            p++;
            switch (*p)
            {
                case 'd':
                {
                    int i = va_arg(args, int);
                    count += printf("%d", i);
                    break;
                }
                case 's':
                {
                    char *s = va_arg(args, char *);
                    if (s == NULL)
                        s = "(null)";
                    count += printf("%s", s);
                    break;
                }
                case 'c':
                {
                    int c = va_arg(args, int);
                    count += printf("%c", c);
                    break;
                }
                case '%':
                {
                    putchar('%');
                    count++;
                    break;
                }
                default:
                {
                    putchar('%');
                    putchar(*p);
                    count += 2;
                    break;
                }
            }
        }
        else
        {
            putchar(*p);
            count++;
        }
    }

    va_end(args);
    return count;
}
