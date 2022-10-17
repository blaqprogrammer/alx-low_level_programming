#include <stdio.h>

/**
 * main- The power house of the code
 *
 * Return: Return a - z in lower case.
 */

int main(void)
{
	int num;
	int num1;

	for (num = 0; num < 9; num++)
	{
		for (num1 = 1; num1 < 10; num1++)
		{
			if (num != num1 && num1 > num)
			{
			putchar(num + '0');
			putchar(num1 + '0');
			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');

	return (0);
}
