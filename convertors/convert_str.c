#include "../main.h"
/**
* convert_str - Converts a string to a pointer to the string
*
* @ap: list containing a character string
*
* Return: Pointer to the character string
*/
char *convert_str(va_list ap)
{
char *s = va_arg(ap, char *);

if (!s)
return ("(null)");

return (s);
}

