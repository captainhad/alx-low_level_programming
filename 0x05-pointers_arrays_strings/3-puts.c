#include "main.h"

/**
 * _puts - Write a function that prints a string , followed 
 * by a new line, to stdout.
 * @str: An input of a string
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0');
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
