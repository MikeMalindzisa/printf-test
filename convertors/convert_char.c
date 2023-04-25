#include "../main.h"

/**
 * convert_char - Converts a char to a string
 *
 * @ap: list containing a single character
 *
 * Return: Pointer to the dynamically allocated string
 */
char *convert_char(va_list ap)
{
	char *s = malloc(2 * sizeof(char));

	if (!s)
		return (NULL);
	s[0] = va_arg(ap, int);
	s[1] = '\0';
	return (s);
}

