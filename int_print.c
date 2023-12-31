#include "main.h"

/**
 * int_printf - print args of int
 * @format: parameter
 * Return: Always 0.
 */
int int_printf(const char *format, ...)
{
va_list args;
int i, j = 0, m;
while (format[j] != '\0')
j++;
va_start(args, *format);
for (i = 0; i < j; i++)
{
if ((format[i] == '%') && ((format[i + 1] == 'd' || format[i + 1] == 'i')))
{
m = va_arg(args, int);
deci(m);
}
else if (!((format[i - 1] == '%') &&
((format[i] == 'd' || format[i] == 'i'))))
pr(format[i]);
}
va_end(args);
return (i);
}
