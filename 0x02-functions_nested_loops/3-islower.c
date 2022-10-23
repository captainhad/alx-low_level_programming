#include "main.h"

/**
 * _islower - Check description
 *
 * @c: An input character
 *
 * Description: islower
 *
 * Return: somthing
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		lower = 1;
	}

	return (lower);
}
