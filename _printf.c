#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"



int _printf(const char *format, ...);

void print_all(const char * const format, ...)
{

	PointingTo Structure[] = {
		{"c", PrintOPTc},
		{"s", PrintOPTs},
		{"%", PrintOPTp},
		{"d", PrintOPTd},
		{"i", PrintOPTi},
		{NULL, NULL}};

	va_list List;
	int VALUE, VARIABLE;
	char *Point

	va_start(List, format);

	VALUE = 0;
	Point = "";
	while (format != NULL && format[VALUE] != '\0')
	{
		VARIABLE = 0;
		while (VARIABLE < 5)
		{
			if (format[VALUE] == *(Structure[VARIABLE]).PrintStruct)
			{
				*(Structure[VARIABLE].P(PrintStruct);
				  break;
			}
					VARIABLE++;
			}
		}
		else
		{
			_putchar(format[VALUE]);
		}
		VALUE++;
	}
	va_end(List);
	return (0);
}
