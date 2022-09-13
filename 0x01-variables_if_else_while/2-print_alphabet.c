#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpbt;

	alpbt = 'a';
	while ((alpbt == 'a') || (alpbt <= 'z'))
	{	
		putchar(alpbt);
		alpbt++;
	}
	putchar('\n');
	return (0);
}
