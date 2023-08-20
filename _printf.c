#include "main.h"
#include <stdarg.h>

/**
 * _printf - creat printf function.
 *
 * @format: identifier to look for.
 *
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
	va_list pfformats;
	int a;
	int length;

	va_start(pfformats, format);
	length = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (a = 0; specifiers[a].type != '\0'; a++)
			{
				if (*format == specifiers[a].type)
				{
					if (specifiers[a].type == 'c')
					{
						putchar(va_arg(pfformats, int));
						length++;
					}
					else if (specifiers[a].type == 's')
					{
						fputs(va_arg(pfformats, char*), stdout);
						length = length + strlen(va_arg(pfformats, char*));
					}
					else if (specifiers[a].type == '%')
					{
						putchar('%');
						length++;
					}
					break;
				}
		}
	}
	else
	{
		putchar(*format);
		length++;
	}
	format++;
}
va_end(pfformats);
return (length);
}