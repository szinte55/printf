#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _printf(const char *format, ...);
int printchar(va_list c);
int printstring(va_list s);
int printint(va_list i);
int printdigit(va_list d);
int printpercent(va_list p);
int _putchar(char c);

/**
 * struct print - struct used to print format types
 * @p: type to print
 * @f: function printed
 */

typedef struct print
{
        char z;
        int (*f)(va_list);
} printp;


#endif
