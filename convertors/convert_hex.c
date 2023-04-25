#include "../main.h"
/**
* convert_hex - Converts an unsigned integer to a lowercase hex string
*
* @ap: list containing an unsigned integer
*
* Return: Pointer to the converted string
*/
char *convert_hex(va_list ap)
{
static char s[12];
unsigned int n = va_arg(ap, unsigned int);

int i = 0;

do {
unsigned int x = n % 16;

if (x < 10)
s[i++] = x + '0';
else
s[i++] = x - 10 + 'a';

n /= 16;
} while (n);
s[i] = '\0';

reverse_string(s);

return (s);
}
/**
* convert_hex_upper - converts an unsigned int to uppercase hexadecimal
* @args: the va_list containing the unsigned int to convert
*
* Return: a pointer to the converted string
*/
char *convert_hex_upper(va_list args)
{
unsigned int num = va_arg(args, unsigned int);

char *hex_upper_str;
int i;

hex_upper_str = convert_to_base(num, 16, 1);
if (!hex_upper_str)
return (NULL);

/* Convert to uppercase */

for (i = 0; hex_upper_str[i]; i++)
{
if (hex_upper_str[i] >= 'a' && hex_upper_str[i] <= 'f')
hex_upper_str[i] -= 32;
}

return (hex_upper_str);
}
