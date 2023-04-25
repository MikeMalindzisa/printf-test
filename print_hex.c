#include "main.h"

/**
* print_hex - Convert unsigned int to lowercase hexadecimal
* @args: arguments list:x
*
*
* Return: number of characters printed
*/
char *print_hex(va_list args, converter_t *format)
{
    unsigned int num;
    char *res;
    int size = 0;
    int i;

    if (format->specifier[0] == 'h' && format->specifier[1] == 'h')
        num = (unsigned char)va_arg(args, unsigned int);
    else if (format->specifier[0] == 'h')
        num = (unsigned short int)va_arg(args, unsigned int);
    else if (format->specifier[0] == 'l')
        num = va_arg(args, unsigned long int);
    else if (format->specifier[0] == 'l' && format->specifier[1] == 'l')
        num = va_arg(args, unsigned long int);
    else
        num = va_arg(args, unsigned int);

    size = snprintf(NULL, 0, "%x", num);
    res = malloc(sizeof(char) * (size + 1));
    if (res == NULL)
        return (NULL);

    sprintf(res, "%x", num);
    for (i = 0; res[i]; i++)
        res[i] = (format->specifier[0] == 'X') ? toupper(res[i]) : res[i];

    return (res);
}


/**
* print_hex_upper - Convert unsigned int to uppercase hexadecimal
* @args: arguments list
* @format: struct containing information about format
*
* Return: number of characters printed
*/
int print_hex_upper(va_list args, converter_t *format)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[1024];
int index = 0, count = 0;

if (format->length == LENGTH_HH)
num = (unsigned char) num;
else if (format->length == LENGTH_H)
num = (unsigned short int) num;
else if (format->length == LENGTH_L)
num = (unsigned long int) num;
else if (format->length == LENGTH_LL)
num = (unsigned long long int) num;
do {
buffer[index++] = "0123456789ABCDEF"[num % 16];
num /= 16;
}
while (num != 0);

buffer[index] = '\0';
reverse_string(buffer);
if (format->flag_hash && buffer[0] != '0')
count += puts("0X");
count += puts(buffer);
return (count);
}
