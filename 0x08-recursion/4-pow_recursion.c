#include "main.h"

/**
 * _pow_recursion - A function that the value of x r**y
 * @x: An input integer, base
 * @y: An input integer, exponent
 * Return: The result of x raised by y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
