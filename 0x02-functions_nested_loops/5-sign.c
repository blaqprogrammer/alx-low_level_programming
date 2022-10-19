#include "main.h"

/**
 *print_sign- entry point
 *@n: returns numbers
 *Return: return if number is negative or positive
 */

int print_sign(int n)
{
	for (n = 0; n < 5; n++)
	{
		if (n > 0)
		{
			print_sign('+');
			return (1);
		}
		if (n == 0)
		{
			return (0);
			print_sign(0);
		}
		else
		{
			print_sign('-');
				return (1);

	}


}
