#include "main.h"

/**
* print_rot13 - prints a string in rot13
* @args: the va_list that contains the string to be printed
* Return: the number of characters printed
*/
int print_rot13(va_list args)
{
char *str = va_arg(args, char *);
int i, j;
int count = 0;
char *rot13 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *ROT13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

if (str == NULL)
return (_puts("(null)"));

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; rot13[j] != '\0'; j++)
{
if (str[i] == rot13[j])
{
count += _putchar(ROT13[j]);
break;
}
}
if (!rot13[j])
{
count += _putchar(str[i]);
}
}
return (count);
}

