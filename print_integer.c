#include "main.h"

/**
* print_integer - Prints an integer
* @args: List of arguments
*
* Return: Number of characters printed
*/
int print_integer(va_list args)
{
int n = va_arg(args, int);
int negative = n < 0 ? 1 : 0;
unsigned int num = negative ? -n : n;
int len = negative ? 1 : 0;
unsigned int tmp = num;
int digit;

/* Calculate number of digits */
do {
len++;
tmp /= 10;
} while (tmp);

/* Handle negative case */
if (negative)
_putchar('-');

/* Print digits in reverse order */
while (len--) {
digit = num % 10;
_putchar(digit + '0');
num /= 10;
}

return (negative ? len + 1 : len);
}

