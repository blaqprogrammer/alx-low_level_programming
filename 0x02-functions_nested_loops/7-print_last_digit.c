#include "main.h"

/**
 * print_last_digit - ebtry point
 * @a: an integer
 * Return: returns the last digit of a number.
 */



int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (a < 0)
	{
		_putchar(n + '0');
	}
	return (n);
}
