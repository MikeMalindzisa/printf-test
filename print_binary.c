#include "main.h"

/**
* print_binary - Converts an unsigned int to binary and prints it
* @args: A va_list pointing to the unsigned int to be converted
*
* Return: The number of characters printed
*/
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int binary[32];
int i, chars_printed = 0;

if (num == 0)
return (_putchar('0'));

for (i = 0; num > 0; i++)
{
binary[i] = num % 2;
num /= 2;
}

for (i--; i >= 0; i--)
{
_putchar(binary[i] + '0');
chars_printed++;
}

return (chars_printed);
}

