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
	int num2;

	for (num = 0; num < 8; num++)
	{
		for (num1 = 1; num1 < 9; num1++)
		{
			for (num2 = 2; num2 < 10; num2++)
			{
				if (num < num1 && num1 < num2)
				{
			putchar(num + '0');
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num < 8)
			{
				putchar(',');
			}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
