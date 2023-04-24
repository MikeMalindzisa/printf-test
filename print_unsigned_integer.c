#include "main.h"

/**
* print_unsigned_integer - Prints an unsigned integer.
* @args: A va_list pointing to the unsigned integer to be printed.
* @format: A list of format tags and modifiers to apply.
*
* Return: The number of characters printed.
*/
int print_unsigned_integer(va_list args, const char *format)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[1024];
int i = 0, len = 0, precision = -1, zero_pad = 0, space_pad = 0;

(void)format;

if (num == 0)
return (_putchar('0'));

while (num > 0)
{
buffer[i++] = num % 10 + '0';
num /= 10;
}

buffer[i] = '\0';
len = str_len(buffer);

if (precision > len)
{
zero_pad = precision - len;
len = precision;
}

if (space_pad > len + zero_pad)
{
space_pad -= len + zero_pad;
len += space_pad;
while (space_pad-- > 0)
_putchar(' ');
}

while (zero_pad-- > 0)
_putchar('0');

while (i-- > 0)
_putchar(buffer[i]);

return (len);
}

