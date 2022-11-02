#include "main.h"

/**
 * factorial - A function that returns a factorial of a number
 * @n: An input integer
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
