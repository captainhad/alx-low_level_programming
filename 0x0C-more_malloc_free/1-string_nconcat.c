#include "main.h"
#include <stdlib.h>

/**
 * string_concat - a function that concatenates two strings
 * @s1: An input pointer to the 1st string
 * @s2: An input pointer to the 2nd string
 * @n: An input integer of the number of strings to concatenate
 * Return: A pointer to concatenated strings or NULL if string is NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, lense1 = 0, lense2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[lense1])
		lense1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[lense2])
		lense2++;
	
	if (n >= lense2)
		n = lense2;

	new_str = malloc(lens1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (; i < (lense1 + n); i++)
	{
		if (i < lense1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);

}
