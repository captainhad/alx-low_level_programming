#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers
 * @seperator: An input string to be between the numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: All the other parameters
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int nums;

	va_start(ap, n);
	for (; i < n; i++)
	{
		nums = va_arg(ap, int);
		_putchar(nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			_putchar(separator);
	}
	_putchar('\n');
	va_end(ap);
}
