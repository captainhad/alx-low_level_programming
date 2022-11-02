#include "main.h"


/**
 * _sqrt_recursion -A function that returns tha natural 
 * square root of a number
 * @n: An input integer
 * Return: the square root of the integer n
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_recursion(n));

	int _sqrt(int prev, int root)
	{
		if (prev > root)
			return (-1);
		else if (prev * prev == root)
			return (prev);
		return (_sqrt(prev + 1, root));
	}
}
