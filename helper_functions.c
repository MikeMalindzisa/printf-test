#include "main.h"

/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
* str_len - Returns the length of a string.
* @s: pointer to string.
*
* Return: length of string.
*/
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;

return (i);
}

/**
 * Reverses the characters in a string.
 * @param s the string to reverse
 */
void reverse_string(char *s) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}


/**
* num_len - Returns the length of an integer.
* @n: integer to find length of.
*
* Return: length of integer.
*/
int num_len(int n)
{
unsigned int num;
int len = 0;

if (n == 0)
return (1);

if (n < 0)
{
len++;
num = -n;
}
else
num = n;

while (num > 0)
{
len++;
num /= 10;
}

return (len);
}

