#include "main.h"

/**
 * main - A function that prints all arguments it received
 * @argc: An argument counter
 * @argv: An argument value
 * Return: 0 as success.
 */

int main(int argc, char *argv[])
{
	for (; argc >= 0; argc++)
		_putchar(argv[argc]);
	_putchar('\n');
	return (0);
}
