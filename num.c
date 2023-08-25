#include "main.h"

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n, len;
	int div;

	n = va_arg(args, int);
	len = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	if (n < 0)
	{
		len += putchar('-');
		if (n == INT_MIN)
		{
			n = -(n + 1); /* Avoid overflow when negating*/
			putchar('2'); /*Print '2' for the first digit*/
			len++;
		}
		n = -n;  /* Make n positive for printing*/
	}

	div = 1;
	while (n / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += putchar('0' + n / div);
		n %= div;
		div /= 10;
	}

	return (len);
}
