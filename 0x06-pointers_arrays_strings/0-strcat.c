#include "main.h"

/**
 * _strcat - A function that concatenate two strings.
 * @dest: An input string.
 * @src: An input string.
 * Return: A pointer to the returning string.
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
