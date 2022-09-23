#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int positive_or_negative(void)
{
	int i;

	srand(time(0));

	i = rand() - RAND_MAX / 2;
	/*your code goes here*/
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);

	return (0);
}
