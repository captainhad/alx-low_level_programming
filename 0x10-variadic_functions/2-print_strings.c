#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



/**
 * print_strings - A function that prints strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: other parameters
 * Return: nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			_putchar("(nil)");
		else
			_putchar(string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			_putchar(separator);
	}
	_putchar('\n');
	va_end(ap);
}
