#include "main.h"

/**
 *print_alphabet_x10- runs the code
 *
 * Return: alphabets from a - z.
 */

void print_alphabet_x10(void)
{

	char az, i;

	for (i = 0; i < 10; i++)
	{
	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
	}
}
