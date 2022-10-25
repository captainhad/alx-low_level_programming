#include "main.h"

/**
 * int _strlen - Check description
 * Description: A function to return the length of a string
 * @s: A string character
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
