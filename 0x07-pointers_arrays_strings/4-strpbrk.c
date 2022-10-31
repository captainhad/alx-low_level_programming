#include "main.h"

/**
 *
 * _strpbrk - A function that searches for a string for any set of bytes
 * @s: An input string
 * @accept: An input character to locates into a string
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */


char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while(*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}

	return (NULL);
}
