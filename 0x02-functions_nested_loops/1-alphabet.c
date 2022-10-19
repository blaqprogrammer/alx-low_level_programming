#include "main.h"

/**
 * print_alphabet- the main is where the code runs
 *
 * Return: 0 always.
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
