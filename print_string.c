#include "main.h"

/**
* print_string - Prints a string
* @args: List of arguments
* @buffer: Buffer to print to
* @flags: The flags to use for printing
* @width: Minimum width of string
* @precision: Precision to use for printing
* @length: The length modifier to use
*
* Return: Number of bytes printed
*/
int print_string(va_list args, char *buffer, flags_t flags,
int width, int precision, int length)
{
char *str, *null_str = "(null)";
int len;

(void)flags;
(void)width;
(void)length;
str = va_arg(args, char *);
if (str == NULL)
str = null_str;
len = _strnlen(str, precision);
_memcpy(buffer, str, len);
return (len);
}

/**
* print_S - Prints a string, replacing non-printable characters with \x followed by ASCII code value in hex
* @args: List of arguments
* @buffer: Buffer to print to
* @flags: The flags to use for printing
* @width: Minimum width of string
* @precision: Precision to use for printing
* @length: The length modifier to use
*
* Return: Number of bytes printed
*/
int print_S(va_list args, char *buffer, flags_t flags,
int width, int precision, int length)
{
char *str, *null_str = "(null)";
int len, i, count = 0;
char hex[2];

(void)flags;
(void)width;
(void)length;
str = va_arg(args, char *);
if (str == NULL)
str = null_str;
len = _strnlen(str, precision);
for (i = 0; i < len; i++)
{
if (str[i] > 31 && str[i] < 127)
_putchar(buffer, str[i]);
else
{
_putchar(buffer, '\\');
_putchar(buffer, 'x');
hex[0] = (str[i] / 16) % 16;
hex[1] = str[i] % 16;
if (hex[0] < 10)
_putchar(buffer, hex[0] + '0');
else
_putchar(buffer, hex[0] + 'A' - 10);
if (hex[1] < 10)
_putchar(buffer, hex[1] + '0');
else
_putchar(buffer, hex[1] + 'A' - 10);
count += 3;
}
count++;
}
return (count);
}

