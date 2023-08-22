#include "main.h"
#include <stdarg.h>

/**
 * _printf - create printf function.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list pfformats;
	int length = 0;

	va_start(pfformats, format);
	length = _vprintf(format, pfformats);
	va_end(pfformats);
	return (length);
}
/**
 * _vprintf - print output formated ones.
 * @format: identifier to look for.
 * @pfformats: vardiac containing arguments.
 * Return: the length of the string.
 */
int _vprintf(const char *format, va_list pfformats)
{
	int a;
	int length = 0;
	char *ch;

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
						ch = va_arg(pfformats, char*);
						if (ch != NULL)
							fputs(ch, stdout);
						length = length + strlen(ch);
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
	return (length);
}
