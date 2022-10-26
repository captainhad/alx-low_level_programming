#include "main.h"

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including a terminating null byte (\0), to buffer pointed to
 * by dest.
 * @dest: A pointer to a destination of a string
 * @src: A pointer to source string to copy from
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);
}
