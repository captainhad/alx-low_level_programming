#include "main.h"

/**
 * _strchr - A function that locate a character in a string
 * @s: An input string to search in
 * @c: An input character to locate into a string s
 * Return: Returns pointer to c position
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
