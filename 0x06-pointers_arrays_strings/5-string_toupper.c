#include "main.h"

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string.
 * @s: An input string.
 * Return: char pointer to be converted to a string
 */


char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (start);
}
