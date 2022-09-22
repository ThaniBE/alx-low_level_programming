#include "main.h"

/**
 * more_numbers - print 10 times digits
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
