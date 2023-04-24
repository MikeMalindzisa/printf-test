#include "main.h"

/**
* print_octal - prints an unsigned int in octal notation
* @args: the va_list containing the octal number to be printed
* @flags: the flags to modify the output
*
* Return: the number of characters printed
*/
int print_octal(va_list args, flags_t *flags)
{
unsigned int num = va_arg(args, unsigned int);
char *octal = malloc(sizeof(char) * (num_len(num, 8) + 1));
int i = 0, len = 0;

if (!octal)
return (-1);

if (num == 0)
octal[i++] = '0';

while (num)
{
octal[i++] = (num % 8) + '0';
num /= 8;
}

octal[i] = '\0';
len = str_len(octal);

if (flags->hash && octal[0] != '0')
len++;

if (!flags->minus)
padding(flags->width, len, flags->zero ? '0' : ' ');

if (flags->hash && octal[0] != '0')
_putchar('0');

if (flags->precision > i - 1)
padding(flags->precision, i - 1, '0');

for (i = i - 1; i >= 0; i--)
_putchar(octal[i]);

if (flags->minus)
padding(flags->width, len, ' ');

free(octal);

return (len);
}

