#include "main.h"

/**
 * main - A function that prints all arguments it received
 * @argc: An argument counter
 * @argv: An argument value
 * Return: 0 as success.
 */

int main(int argc, char *argv[])
{
	while ( argc--)
	{
		_putchar(argv++);
	_putchar('\n');
	}
	return (0);
}
