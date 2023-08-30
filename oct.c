#include "main.h"
#include <stdio.h>

/**
 * print_unsigned - Prints an unsigned integer
 * @num: The unsigned integer to print
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int num)
{
	int count;

		count = 0;
    if (num >= 10)
        count += print_unsigned(num / 10);
    putchar((num % 10) + '0');
    return (count + 1);
}

/**
 * print_octal - Prints an octal number
 * @num: The octal number to print
 * Return: Number of characters printed
 */
int print_octal(unsigned int num)
{
	int count;

    count = 0;
    if (num >= 8)
       count += print_octal(num / 8);
    putchar((num % 8) + '0');
    return (count + 1);
}

/**
 * print_hexadecimal - Prints a hexadecimal number
 * @num: The hexadecimal number to print
 * @uppercase: Whether to print in uppercase (1) or lowercase (0)
 * Return: Number of characters printed
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	int count;
    char hex_digits[] = "0123456789abcdef";
    if (uppercase)
        hex_digits[10] = 'A';
    
    count = 0;
    if (num >= 16)
        count += print_hexadecimal(num / 16, uppercase);
    putchar(hex_digits[num % 16]);
    return (count + 1);
}

