#include "main.h"

/**
 * is_palindrome - A function that returns 1 if a string is palindrome and 0 if not
 * @s: An input string
 * Return: return 1 if palindrome or 0 if otherwise
 */


int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (0);
}
