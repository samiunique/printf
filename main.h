#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


struct convert
{
	char *type;
	int (*f)(va_list);
};
typedef struct convert f_specifier;

/* functions*/
int parser(const char *format, f_specifier specifiers[], va_list arg_list);
int _printf(const char *format, ...);

int handle_c(va_list);
int handle_s(va_list);
int handle_per(__attribute__((unused))va_list list);

#endif
