#include "main.h"

/**
 * print_times_table - Check Description
 * Description: print times table for 9 starting from zero
 * Return: Nothing.
 */

void print_time_table(int n)
{
	int i, j;

	if (n > 0 && n < 10)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
				_putchar(i * j);
			_putchar('\n');
		}
	}
}
