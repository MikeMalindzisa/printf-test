#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   int len = 0;
   int len_2 = 0;

	
   len = _printf("Let's try to printf a simple sentence.\n");
    len_2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    printf("Character Length: [%d, %i]\n", len, len);
    printf("String Length: [%d]\n", len_2);
    return (0);

}
