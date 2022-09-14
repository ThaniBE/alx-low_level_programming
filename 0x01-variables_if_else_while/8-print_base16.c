#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int bs_16, x_chr;

	bs_16 = 48;
	while (bs_16 == 48 || bs_16 <= 57)
	{
		putchar(bs_16);
		bs_16++;
	}
	x_chr = 97;
	while (x_chr == 97 || x_chr <= 102)
	{
		putchar(x_chr);
		x_chr++;
	}
	putchar(10);
	return (0);
}
