#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Return: 1 - 9 skips 2 and 4
 */



void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 && 1 == 4)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
