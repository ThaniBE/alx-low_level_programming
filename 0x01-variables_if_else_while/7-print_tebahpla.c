#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int rvs_ltt;

	rvs_ltt = 'z';
	while (rvs_ltt == 'z' || rvs_ltt >= 'a')
	{
		putchar(rvs_ltt);
		rvs_ltt--;
	}
	putchar('\n');
	return (0);
}
