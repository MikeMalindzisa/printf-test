#include "../main.h"
/**
* convert_octal - Converts an unsigned integer to an octal string
*
* @ap: list containing an unsigned integer
*
* Return: Pointer to the converted string
*/
char *convert_octal(va_list ap)
{
static char s[12];
unsigned int n = va_arg(ap, unsigned int);

int i = 0;

do {
s[i++] = n % 8 + '0';
n /= 8;
} while (n);

s[i] = '\0';

reverse_string(s);

return (s);
}
