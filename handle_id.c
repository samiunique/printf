#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n;
	int d;
	int len;
	int num;

	n  = va_arg(args, int);
	d = 1;
	len = 0;

	if (n < 0)
	{
		len = len + putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / d > 9; )
		d *= 10;
	for (; d != 0; )
	{
		len = len +  putchar('0' + num / d);
		num = num % d;
		d = d / 10;
	}
	return (len);
}
/**
 * handle_i - use of %d and %i.
 *  @list: list
 *  Return: len.
 */
int handle_i(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}
