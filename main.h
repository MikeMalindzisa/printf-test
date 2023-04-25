#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


/**
 * struct conversion - struct for conversion specifiers
 * @specifier: the conversion specifier
 * @convert: the function associated with conversion specifier
 */
typedef struct conversion
{
    char *specifier;
    char *(*convert)(va_list);
} converter_t;

int _printf(const char *format, ...);

/* Conversion Functions */
char *convert_char(va_list);
char *convert_str(va_list);
char *convert_integer(va_list);
char *convert_binary(va_list);
char *convert_unsigned(va_list);
char *convert_octal(va_list);
char *convert_hex(va_list);
char *convert_hex_upper(va_list);
char *convert_non_printable(va_list);
char *convert_address(va_list);
char *convert_rev(va_list);
char *convert_rot13(va_list);
char *convert_to_base(unsigned int num, int base, int uppercase);

/* Helper Functions */
int _putchar(char c);
int _strlen(char *s);
int num_len(int n);
char *handler(char format, va_list ap);
int parser(const char *format, va_list ap);
void reverse_string(char *s);
int is_printable(char c);


/* Print Functions 
int print_binary(va_list args);
int print_char(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_integer(va_list args);
int print_octal(va_list args);
int print_pointer(va_list valist);
int print_reverse(va_list args);
int print_rot13(va_list args);
int print_string(va_list args, char *buffer, const char flags,
                int width, int precision, int length);
int print_unsigned_integer(va_list args, const char *format);
*/
#endif
