#ifndef HolbertonGroupProjectSAMandDIEGO
#define HolbertonGroupProjectSAMandDIEGO
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>



typedef struct PrintStruct
{
	char Structure;
	int (*P)(va_list);
} PointingTo;




int _putchar(char c);
int _printf(const char *format, ...);

int PrintOPTc(va_list OfArguments);
int PrintOPTs(va_list OfArguments);
int PrintOPTp(va_list OfArguments);
int PrintOPTd(va_list OfArguments);
int PrintOPTi(va_list OfArguments);

#endif
