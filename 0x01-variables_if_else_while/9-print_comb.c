#include <stdio.h>

/**
 * main- The power house of the code
 *
 * Return: Return a - z in lower case.
 */

int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		{
		putchar(num + '0');
		if (num < 9)
	{
		putchar(',');
	}
		}
	putchar('\n');

	return (0);
}
