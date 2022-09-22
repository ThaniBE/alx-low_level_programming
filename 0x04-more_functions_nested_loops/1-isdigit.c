#include "main.h"

/**
 * _isdigit - checks for a digit
 *  @c: digit to check
 *  Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c >= 58)
	{
		for (c = 48; c < 58; c++)
			return (0);
	}
	return (1);
}

