#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: numbers if % by 3 or 5.
 */

int main(void)

{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
