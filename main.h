#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
struct f_specifier 

{
       char type;

       void *pfformat;
};       

int _printf(const char *format, ...);


#endif
