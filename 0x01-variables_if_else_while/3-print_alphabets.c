#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lwr, upp;

	lwr = 'a';
	while (lwr == 'a' || lwr <= 'z')
	{
		putchar(lwr);
		lwr++;
	}
	upp = 'A';
	while (upp == 'A' || upp <= 'Z')
	{
		putchar(upp);
		upp++;
	}
	putchar('\n');
	return (0);
}
