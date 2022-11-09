#include "main.h"

/**
 * main - a function that prints the number of arguments passed into it
 * @argc: An argument counter
 * @argv: An argument value
 * Return: 0 (success)
 */


int main(int argc, char *argv[])
{
	if (argv[0])
		_putchar(argc - 1);
	_putchar('\n');

	return (0);
}
