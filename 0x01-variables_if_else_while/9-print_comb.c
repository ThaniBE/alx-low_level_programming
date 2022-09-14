#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}

		num++;
	}
	putchar(10);
	return (0);

}

