#include "../main.h"
/**
* convert_unsigned - Converts an unsigned integer to a string
*
* @ap: list containing an unsigned integer
*
* Return: Pointer to the converted string
*/
char *convert_unsigned(va_list ap)
{
static char s[12];
unsigned int n = va_arg(ap, unsigned int);

int i = 0;

do {
s[i++] = n % 10 + '0';
n /= 10;
} while (n);

s[i] = '\0';

reverse_string(s);

return (s);
}

