#include "main.h"


/**
 * is_prime_number - A function that checks if a number is a prime
 * @n: An integer input
 * Return: 1 if n is a prime number or 0 otherwise
 */

int is_prime_number(int n)
{
	int is_divisible(int num, int div);
	int div = 2;

	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	return (is_divisible(n, div));
}

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}	
