#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
   /* _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/
    _printf("%d", 1024);
    _printf("%d", -1024);/*Expected] -1024-1024*/
    _printf("%d", 0);/*[Expected] 00*/
    _printf("%d", INT_MAX); /*[Expected] 21474836472147483647*/
    _printf("%d", INT_MIN);/*[Expected] -2147483648-2147483648(22 chars long)*/
   /*_printf("%d", l);where l is a long int equals to INT_MAX + 1024*/
  /*  _printf("%d", l);*//*[Expected]*/
/*-2147482625-2147482625*/
    _printf("There is %d bytes in %d KB\n", 1024, 1);/*[Expected]*/
/*21474826242147482624*/
    _printf("%d - %d = %d\n", 1024, 2048, -1024); /*(0 chars long)
[Expected]*/
/*There is 1024 bytes in 1 KB
There is 1024 bytes in 1 KB*/
     _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX)); /*[Expected]
1024 - 2048 = -1024
1024 - 2048 = -1024*/
     _printf("%i", 1024);/*[Expected]
-2147483648 + 2147483647 = -1
-2147483648 + 2147483647 = -1*/
     _printf("%i", -1024);
     _printf("%i", 0);
     _printf("%i", INT_MAX);
      _printf("%i", INT_MIN);
    /* _printf("%i", l);
     _printf("%i", l);*/
      _printf("There is %i bytes in %i KB\n", 1024, 1);
      _printf("%i - %i = %i\n", 1024, 2048, -1024);
      _printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
      _printf("%d == %i\n", 1024, 1024);
      _printf("iddi%diddiiddi\n", 1024);
       _printf("%d", 10000);
       _printf("%i", 10000);
    return (0);
}
