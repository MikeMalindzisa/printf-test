#include "../main.h"
/**
* convert_binary - converts an unsigned int to binary
* @args: list of arguments
*
* Return: pointer to the converted string
*/
char *convert_binary(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
char *binary = malloc(33 * sizeof(char));
int i, len = 0;

if (!binary)
return (NULL);

if (n == 0)
{
binary[len++] = '0';
}
else
{
for (i = 0; n > 0; i++)
{
binary[i] = (n & 1) ? '1' : '0';
n >>= 1;
len++;
}
}

binary[len] = '\0';
reverse_string(binary);
return (binary);
}

