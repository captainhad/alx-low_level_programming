#include "main.h"

/**
 * main -Entry point
 * Description: Print alphabets
 * Return: nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
