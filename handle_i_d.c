#include "main.h"
#include <stdio.h>

/**
 * handle_i - Handles %i format specifier
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_i(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * handle_d - Handles %d format specifier (same as %i)
 * @list: List of arguments
 * Return: Number of characters printed
 */
int handle_d(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
