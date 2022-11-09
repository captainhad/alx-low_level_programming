#include "main.h"

/**
 * main - A function that adds two numbers
 * @argc: An argument counter
 * @argv: An argument value
 * Return: 1.
 */

int main(int argc, char argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				_putchar(error);
				_putchar('\n');
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	_putchar(result);
	return (0);
}
