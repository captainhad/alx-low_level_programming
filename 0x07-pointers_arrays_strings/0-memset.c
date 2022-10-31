#include "main.h"

/**
 * _memset - A functions that fills memory with a constant bytes
 * @s: Location to fill
 * @b: Char to fill location with
 * @n: number of bytes to fill
 * Return: Returns pointer to location
 */

char *_memset(char *s, char b, unsigned n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
