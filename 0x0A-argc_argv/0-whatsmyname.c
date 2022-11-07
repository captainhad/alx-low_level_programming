#include "main.h"


/**
 * main - A program that prints it name , followed by a new line
 * @argc: argument count
 * @argv: argument value, a string that comes after calling the function
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		_putchar(argv[0]);
	_putchar('\n');

	return (0);
}
