#include "../main.h"
/**
* convert_integer - Converts an integer to a string
*
* @ap: list containing an integer
*
* Return: Pointer to the converted string
*/
char *convert_integer(va_list ap)
{
static char s[12];
int n = va_arg(ap, int);
int negative = 0;
unsigned int m;
int i = 0;

if (n < 0)
{
negative = 1;
m = -n;
}
else
{
m = n;
}

do {
s[i++] = m % 10 + '0';
m /= 10;
} while (m);

if (negative)
s[i++] = '-';

s[i] = '\0';

reverse_string(s);

return (s);
}
