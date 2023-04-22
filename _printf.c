#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Start here
 * Desc - print to the stdout according to a format
 * 
 * @format: format string
 * 
 * Return: number of chars printed
 * 
 */

int _printf(const char *format, ...)
{
	char c;
	char *s;
	int index;
	int len = 0;


	va_list var_list;

	va_start(var_list, format);

	for (index = 0; format && format[index]; index++)
	{
		if (format[index] == '%')
		{
			switch (format[index])
			{
			case 'c':
				c = va_arg(var_list, int);
				write(1, &c, 1);
				len++;
				break;

			case 's':
				s = va_arg(var_list, char *);
				while(*s)
				{
					write(1, s, 1);
					s++;
					len++;
				}
				break;

			case '%':
				write(1, "%", 1);
				len++;
				break;

			default:
				write(1, "%", 1);
				write(1, &format[index], 1);
				len +=2;
				break;

			}
		}
		else
		{
			write(1, &format[index], 1);
			len++;
		}
	}

	va_end(var_list);
	return (len);
}
