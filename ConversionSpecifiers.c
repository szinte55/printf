#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"


/**
 * printOPTc - a character is being printed
 * @list: the characters being liested and then being printed
 * Return: nada
 */
int printOPTc(va_list list)
{
	char character;

	character = va_arg(list, int);
	putchar(character);
}

/**
 * printOPTs - the string being printed
 * @list: the string thats being listed ready to print
 * Return: nada
 */

int printOPTs(va_list list)
{
	char *print = va_arg(list, char*);
	int string;

	for (string = 0; print[string] != '\0'; string++)
	{
		putchar(print[string]);
	}
}


/**
 * PrintPercentSign - Prints a percentsign
 * @list: The arguments listed
 * Return: The amount of percentsigns being printed
 */

int printOPTp(va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * printOPTd - decimal thats being printed
 * @list: decimals geting ready to print
 * Return: nada
 */
int printOPTd(va_list list)
{
	int decimal;

	decimal = va_arg(list, int);
	return (write(1, &decimal, 1));
}


/**
 * printOPTi - a number is being printed
 * @list: list of numbers
 * Return: nada
 */
int printOPTi(va_list list)
{
	int numbers;

	numbers = va_arg(list, int);
	return (write(1, &numbers, 1));
}
