#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: lower or uper case letter
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c < 97 || c > 122)
		if (c < 65 || c > 90)
		{
			for (c = 97, c = 65; c < 122 || c < 90; c++)
				return (0);
		}
	return (1);
}
