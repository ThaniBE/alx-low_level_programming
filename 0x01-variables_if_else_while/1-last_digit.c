#include <stdlib.h>
#include <time.h>

/*more headers goes there*/
#include <stdio.h>

/*betty style doc for function main goes there*/
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lstdg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here*/
	lstdg = n % 10;
	if (n > 0)
	{
		if(lstdg > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, lstdg);
		else if (lstdg == 0)
			printf("Last digit of %d is %d and is 0\n", n, lstdg);
		else if ((lstdg < 6) && (lstdg != 0))
			printf("Last  digit of %d is %d and is less than six and not zero\n", n, lstdg);
	}
	return (0);
}
