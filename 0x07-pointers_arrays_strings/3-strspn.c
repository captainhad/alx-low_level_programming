#include "main.h"

/**
 * _strspn - A function that gets the legth of a prefix substring
 * @s: An input string 
 * @accept: An input character to locate into sttring s
 * Return: To returns pointerto c position
 */


unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
