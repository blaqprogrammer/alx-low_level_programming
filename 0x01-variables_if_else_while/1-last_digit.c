#include <stdlib.h>

#include <time.h>

/* more headers goes there */

#include <stdio.h>

/**
 *main- This is the main part of the program
 *
 *Return: it returns the last digit of a variable
 */

/* betty style doc for function main goes there */

int main(void)

{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", n);
	}
	else if (n < 6 != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", n);
	}
	return (0);
}
