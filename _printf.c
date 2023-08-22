#include "main.h"

/**
 *  _printf - function to creat printf list formats
 *  @format: format of specifiers
 *
 *  Return: out put to print
 */

int _printf(const char *format, ...)
{
	int print_out;
	f_specifier specifiers[] = {
		{"c", handle_c},
		{"s", handle_s},
		{"%", handle_per},
		{"i", handle_i},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	/*Calling parser function*/
	print_out = parser(format, specifiers, arg_list);
	va_end(arg_list);
	return (print_out);
}
