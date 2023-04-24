

# Conversion Functions

This folder contains the implementation of various conversion functions used in a custom printf implementation.

## Functions

-   `convert_char`: Converts a `char` argument to a string representation.
-   `convert_str`: Converts a `char*` argument to a string representation.
-   `convert_integer`: Converts an `int` argument to a string representation.
-   `convert_unsigned`: Converts an `unsigned int` argument to a string representation.
-   `convert_octal`: Converts an `unsigned int` argument to an octal string representation.
-   `convert_hex`: Converts an `unsigned int` argument to a lowercase hexadecimal string representation.
-   `convert_hex_upper`: Converts an `unsigned int` argument to an uppercase hexadecimal string representation.
-   `convert_binary`: Converts an `unsigned int` argument to a binary string representation.
-   `convert_non_printable`: Converts a `char*` argument to a string representation where non-printable characters are replaced with their ASCII codes in hexadecimal format.
-   `convert_address`: Converts a `void*` argument to a string representation of its memory address.
-   `convert_rev`: Reverses the characters of a `char*` argument and returns the resulting string.
-   `convert_rot13`: Encodes a `char*` argument using the ROT13 cipher and returns the resulting string.

## Functionality

Each conversion function takes in a `va_list` argument and returns a `char*` that contains the converted string. The functions handle the following conversion specifiers:

-   `%c`: character
-   `%s`: string
-   `%d`/`%i`: signed decimal integer
-   `%u`: unsigned decimal integer
-   `%o`: octal integer
-   `%x`: hexadecimal integer (lowercase)
-   `%X`: hexadecimal integer (uppercase)
-   `%b`: binary integer
-   `%S`: non-printable characters in a string
-   `%p`: pointer address
-   `%r`: string in reverse
-   `%R`: string converted to ROT13 encoding

## Helper Functions

The folder also contains a `helper.c` file, which contains various helper functions used by the conversion functions. These functions include:

-   `count_digits`: counts the number of digits in an integer
-   `reverse_string`: reverses a string
-   `str_to_hex`: converts a string to hexadecimal format


## Usage

To use these conversion functions in your own code, simply include the appropriate header file and call the corresponding conversion function for each conversion specifier in your `printf` function.

For example:

    #include "convertors.h"

int main(void)
{
    char *str = "world";
    int num = 42;

    printf("Hello, %s! The answer is %d.\n", str, num);
    printf("In binary, the answer is %b.\n", num);

    return 0;
}

## Authors

-   Maqhawe Mike Malindzisa - machaweml@gmail.com
-   Grace Bamidele -gbamidele23@gmail.com


