#include "main.h"

/**
 * main - Entry point
 *
 * description: 10x the alphabet in lowercase
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char i;
	
	int j;

	for (i = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_puchar('\n');
	}

}
