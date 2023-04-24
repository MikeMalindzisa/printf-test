#include "main.h"

/**
* _printf - print output according to a format.
* @format: string to print.
*
* Return: number of characters printed.
*/
int _printf(const char *format, ...)
{
va_list ap;
int count = 0;

if (format == NULL)
return (-1);

va_start(ap, format);

count = parser(format, ap);

va_end(ap);

return (count);
}

