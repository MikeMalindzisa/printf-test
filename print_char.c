#include "main.h"

/**
* print_char - Prints a char.
*
* @args: A va_list pointing to the character to be printed.
*
* Return: The number of characters printed (always 1).
*/

int print_char(va_list args)
{
char c = va_arg(args, int);
_putchar(c);
return (1);
}

