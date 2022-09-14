#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ltt;

	ltt = 'a';
	while (ltt == 'a' || ltt <= 'z')
	{
		if (!(ltt == 'e' || ltt == 'q'))
			putchar(ltt);
		ltt++;
	}
	putchar('\n');
	return (0);
}

