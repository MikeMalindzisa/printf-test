#include "../main.h"
/**
* convert_char - Converts a char to a string
*
* @ap: list containing a single character
*
* Return: Pointer to the converted string
*/
char *convert_char(va_list ap)
{
static char s[2];

s[0] = va_arg(ap, int);
s[1] = '\0';

return (s);
}

