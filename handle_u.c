#include "main.h"

/**
 * handle_u - unsigned int
 * @list: list
 * Return: unsigned i
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

/**
 * print_unsgined_number - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_number(unsigned int n)
{
	int d;
	int len;
	unsigned int num;

	d = 1;
	len = 0;

	num = n;

	for (; num / d > 9; )
		d *= 10;

	for (; d != 0; )
	{
		len += putchar('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (len);
}
