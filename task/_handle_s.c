#include "main.h"

/**
 * handle_s - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int handle_s(va_list list)
{
	int a;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = ("(null)");
	for (a = 0; str[a] != '\0'; a++)
		putchar(str[a]);
	return (a);
}
