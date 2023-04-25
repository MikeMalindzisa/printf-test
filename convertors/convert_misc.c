#include "../main.h"
/**
* convert_non_printable - Converts a string to a format that is printable
* @arg: list of arguments
*
* Return: Pointer to the converted string
*/
char *convert_non_printable(va_list arg)
{
char *str = va_arg(arg, char *);
int i, j;
char *hex_str;

if (!str)
return (NULL);


hex_str = malloc(_strlen(str) * 4 + 1);

if(!hex_str)
return (NULL);

for (i = 0, j = 0; str[i]; i++, j++)
{
if (is_printable(str[i]))
{
hex_str[j] = str[i];
}
else
{
hex_str[j++] = '\\';
hex_str[j++] = 'x';
hex_str = convert_hex(arg);
}
}

hex_str[j] = '\0';
return (hex_str);
}

/**
 * is_printable - checks if the ASCII value of the char is between 32 and 126;
 * @c: Char to check
 * Return: 1 if true else 0
 */

int is_printable(char c)
{
return c >= 32 && c <= 126;
}

/**
* convert_address - Converts the void pointer into hexadecimal address
* @ap: Argument pointer to traverse through variadic arguments.
*
* Return: A string with converted argument.
*/
char *convert_address(va_list ap)
{
unsigned long int p = va_arg(ap, unsigned long int);
char *str = malloc(sizeof(char) * (17));
const char *hex_digits = "0123456789abcdef";
unsigned long int value = (unsigned long int) p;
int i = 0;

if (str == NULL)
return (NULL);


str[0] = '0';
str[1] = '1';

for (i = 0; i < (int)sizeof(void *) * 2; i++)
{
str[sizeof(void *) * 2 - i + 1] = hex_digits[value % 16];
value /= 16;
}
str[sizeof(void *) * 2 + 2] = '\0';

return (str);
}
/**
* convert_rev - Reverses a string
*
* @ap: List of arguments from _printf
*
* Return: Pointer to reversed string
*/
char *convert_rev(va_list ap)
{
char *s = va_arg(ap, char *);
int len, i, j;
char temp;

if (s == NULL)
return (NULL);

len = strlen(s);
j = len - 1;
for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}

return (s);
}
/**
* convert_rot13 - Encodes a string using rot13
* @list: A va_list containing the string to encode
*
* Return: The encoded string
*/
char *convert_rot13(va_list list)
{
char *str = va_arg(list, char *);
char *res = malloc(sizeof(char) * (strlen(str) + 1));
int i;

if (res == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') ||
(str[i] >= 'A' && str[i] <= 'M'))
res[i] = str[i] + 13;
else if ((str[i] >= 'n' && str[i] <= 'z') ||
(str[i] >= 'N' && str[i] <= 'Z'))
res[i] = str[i] - 13;
else
res[i] = str[i];
}
res[i] = '\0';

return (res);
}

