#ifndef _PRINTF_H
#define _PRINTF_H
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
struct f_specifier 

{
       char type;

       void *pfformat;
};
extern struct f_specifier specifiers[];


int _printf(const char *format, ...);


#endif
