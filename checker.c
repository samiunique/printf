#include "main.h"
#include <stdio.h>

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @specifiers: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, f_specifier specifiers[], va_list arg_list)
{
	int i, j;
	int r_val;
	int print_out;

	print_out = 0;
	for (i = 0; format[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (format[i] == '%') /*Checks for format specifiers*/
		{
			for (j = 0; specifiers[j].type != NULL; j++)
			{
				if (format[i + 1] == specifiers[j].type[0])
				{
				r_val = specifiers[j].f(arg_list);
				if (r_val == -1)
				return (-1);
				print_out = print_out + r_val;
				break;
				}
				}
				if (specifiers[j].type == NULL && format[i + 1] != ' ')
				{
					if (format[i + 1] != '\0')
					{
					putchar(format[i]);
					putchar(format[i + 1]);
					print_out = print_out + 2;
					}
					else
					return (-1);
					}
					i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			putchar(format[i]); /*call the write function*/
			print_out++;
		}
	}
	return (print_out);
}
