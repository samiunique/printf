#include "main.h"
/**
 * handle_c - print characters
 *
 * @list: list of argument
 *
 * Return: the number of characters
 */
int handle_c(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}
