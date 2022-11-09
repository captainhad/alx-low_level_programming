#include "main.h"


/**
 * main - A function to multiply two numbers
 * @argc: An argument counter
 * @argv: argument value
 * Return: 0 as a success
 */


int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('error');
		_putchar('\n');

		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		_putchar(result);
		_putchar('\n');

		return (0);
	}
}
