#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is upper, 0 otherwise
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		for (c = 65; c <= 90; c++)
			return (0);
	}

	return (1);
}
