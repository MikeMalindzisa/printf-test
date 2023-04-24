#include "main.h"

/**
* print_reverse - prints a string in reverse
* @args: the va_list containing the string to print
*
* Return: the number of characters printed
*/
int print_reverse(va_list args)
{
char *str = va_arg(args, char *);
int len = 0;

if (str == NULL)
str = "(null)";

len = _strlen(str);
for (len--; len >= 0; len--)
_putchar(str[len]);

return (_strlen(str));
}

