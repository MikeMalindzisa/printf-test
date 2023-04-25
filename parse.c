#include "main.h"

/**
* parser - parse format and prints output accordingly
* @format: string to print.
* @ap: argument list
*
* Return: number of characters printed.
*/
int parser(const char *format, va_list ap)
{
int i = 0, count = 0;
char *buff = NULL;

while (format && format[i])
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
if (format[i] == '%')
count += _putchar(format[i]);
else
{
buff = handler(format[i], ap);
if (buff == NULL)
return (-1);
count += puts(buff);
free(buff);
}
}
else
count += _putchar(format[i]);
i++;
}

return (count);
}

