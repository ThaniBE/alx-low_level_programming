#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: character to check
 *
 * Return: if lowercase, 1
 * 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		for (c = 97; c <= 122; c++)
			return (0);
	}
	return (1);
}
