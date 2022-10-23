#include "main.h"

/**
 * main - Entry point
 * Description: It Prints alphabet in lowercase followed by a new line
 * Return: Nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
