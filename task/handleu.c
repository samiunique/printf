#include "main.h"

/**
 * handle_u - Handles %u format specifier
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_u(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_length = print_unsigned(num);
	return (num_length);
}

/**
 * handle_o - Handles %o format specifier
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_o(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_length = print_octal(num);
	return (num_length);
}

/**
 * handle_x - Handles %x format specifier
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_x(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_length = print_hexadecimal(num, 0);
	return (num_length);
}

/**
 * handle_X - Handles %X format specifier
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_X(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_length = print_hexadecimal(num, 1);
	return (num_length);
}

