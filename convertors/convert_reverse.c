/**
 * convert_rev - Reverses a string
 *
 * @ap: list containing a string to be reversed
 *
 * Return: Pointer to the reversed string
 */
char *convert_rev(va_list ap)
{
    char *str = va_arg(ap, char *);
    int len = _strlen(str);
    char *rev_str = malloc(sizeof(char) * (len + 1));
    int i, j;

    if (rev_str == NULL)
        return (NULL);

    for (i = len - 1, j = 0; i >= 0; i--, j++)
        rev_str[j] = str[i];

    rev_str[j] = '\0';

    return (rev_str);
}

/**
 * handle_unknown - Handles unknown format specifier
 *
 * @format: format specifier
 * @ap: list of arguments
 *
 * Return: Pointer to output string
 */
char *handle_unknown(char format, va_list ap)
{
    if (format == 'r')
        return (convert_rev(ap));
    else
        return (NULL);
}

