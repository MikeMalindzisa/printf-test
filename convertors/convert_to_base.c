#include "../main.h"

/**
 * convert_to_base - take three args and return
 * a pointer to the string to be converted
 * @num: number to convert
 * @base: base to convert to
 * @uppercase: case determinant
 *
 * Return: pointer
 */

char *convert_to_base(unsigned int num, int base, int uppercase)
{
static char buf[33];
char *ptr;

const char *digits = uppercase ? "012345678ABCDEF" : "012345678abcdef";

ptr = &buf[sizeof(buf) - 1];
*ptr = '\0';

do {
*--ptr = digits[num % base];
num /= base;
} while (num != 0);

return (ptr);

}
