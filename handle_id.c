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
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * handle_i - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int handle_i(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * handle_u - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int handle_u(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
