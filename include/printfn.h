#ifndef PRINTFN_H
#define PRINTFN_H

#include <stdarg.h>

/**
 * printfn - A custom printf-like function
 * @format: Format string (similar to printf)
 * @...: Variable arguments based on format specifiers
 *
 * Supported format specifiers:
 *   %d - integer
 *   %s - string
 *   %c - character
 *   %% - literal %
 *
 * Return: Number of characters printed
 */
int printfn(const char *format, ...);

#endif /* PRINTFN_H */
