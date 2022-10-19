#include "main.h"

/**
 *print_sign- entry point
 *@n: returns numbers
 *Return: return if number is negative or positive
 */

int print_sign(int n)
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putchar('-');
			return (1);

	}


}
