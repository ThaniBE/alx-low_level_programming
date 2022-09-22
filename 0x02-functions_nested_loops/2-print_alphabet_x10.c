#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i, a;

	i = 48;
	while (i < 58)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar(10);
	}
}
