#include "main.h"

/**
* print_pointer - prints the address of the passed in pointer
* @valist: argument list containing a single void pointer
* @flags: struct containing flags modifying the output formatting
* Return: number of characters printed
*/
int print_pointer(va_list valist, modifier_t flags)
{
unsigned long int ptr = va_arg(valist, unsigned long int);
char *prefix = "0x";
int prefix_len = 2, chars_printed = 0;

/* account for null pointer */
if (!ptr && flags.precision >= 0)
flags.precision++;

/* add prefix if flag is enabled */
if (flags.hash_flag)
chars_printed += print_buffer(prefix, prefix_len, flags);

/* convert pointer value to hex and print */
chars_printed += print_hex_base((unsigned long int)ptr, 16,
flags.precision, 0);

return (chars_printed);
}

