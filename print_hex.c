#include "main.h"

/**
* print_hex - Convert unsigned int to lowercase hexadecimal
* @args: arguments list
* @format: struct containing information about format
*
* Return: number of characters printed
*/
int print_hex(va_list args, formatting_t *format)
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
buffer[index++] = "0123456789abcdef"[num % 16];
num /= 16;
} while (num != 0);

buffer[index] = '\0';
reverse_string(buffer);
if (format->flag_hash && buffer[0] != '0')
count += _puts("0x");
count += _puts(buffer);
return (count);
}

/**
* print_hex_upper - Convert unsigned int to uppercase hexadecimal
* @args: arguments list
* @format: struct containing information about format
*
* Return: number of characters printed
*/
int print_hex_upper(va_list args, formatting_t *format)
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
} while (num != 0);

buffer[index] = '\0';
reverse_string(buffer);
if (format->flag_hash && buffer[0] != '0')
count += _puts("0X");
count += _puts(buffer);
return (count);
}

