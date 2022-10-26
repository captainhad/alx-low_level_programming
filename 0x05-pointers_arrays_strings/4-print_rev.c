#include "main.h"

/**
 * print_rev - A funtion that print a string in reverse
 * , followed by a new line
 * @s: An input string
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
