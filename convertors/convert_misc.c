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
char *new_str;

if (str == NULL)
return (NULL);

new_str = malloc(sizeof(char) * (_strlen(str) * 4 + 1));
if (new_str == NULL)
return (NULL);

for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
if (str[i] < 32 || str[i] >= 127)
{
hex_str = convert_to_hex(str[i]);
if (hex_str == NULL)
return (NULL);

new_str[j] = '\\';
new_str[j + 1] = 'x';
new_str[j + 2] = hex_str[0];
new_str[j + 3] = hex_str[1];
j += 3;
free(hex_str);
}
else
new_str[j] = str[i];
}

new_str[j] = '\0';
return (new_str);
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
char *result;

if (str == NULL)
return (NULL);
if (p == 0)
return (_strdup("(nil)"));
_strcpy(str, "0x");
convert_base(str + 2, p, 16, 0);
result = _strdup(str);
free(str);
return (result);
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

len = _strlen(s);
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
char *res = malloc(sizeof(char) * (_strlen(str) + 1));
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

