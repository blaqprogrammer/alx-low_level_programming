#include "main.h"

/**
 * main- the main is where the code runs
 *
 * Return: The code returns a string.
 */

void print_alphabet(void)
{
	char az;
	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
		_putchar('\n');
	}
}
