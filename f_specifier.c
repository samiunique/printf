#include "main.h"
#include <stdarg.h>

/**
 * f_specifier - Initialize format specifiers array.
 *
 * Description: Initializes an array of format specifiers.
 *
 * Return: The array of format specifiers.
 */
struct f_specifier specifiers[] = {
	{'c', NULL},
	{'s', NULL},
	{'%', NULL},
	{'r', NULL},
	{'\0', NULL}
};
