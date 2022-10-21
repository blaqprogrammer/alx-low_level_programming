#include "main.h"

/**
 * more_numbers - The entry point
 *
 * Return: prints 1 - 14
 */



void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 11; j++)
	{
		for (i = 0; i < 15; i++)
	{
		_putchar(i);
	}
		_putchar(j);
		_putchar('\n');
	}
}
