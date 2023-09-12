#include "main.h"

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n, len;
	int is_min, div;

	n = va_arg(args, int);
	len = 0;
	is_min = 0;
	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	if (n == INT_MIN)
	{
		is_min = 1;
		n++;
	}
	if (n < 0)
	{
		len += putchar('-');
		n = -n;
	}
	div = 1;
	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
	if (is_min)
	{
		putchar('8');
		len++;
	}
	return (len);
}
