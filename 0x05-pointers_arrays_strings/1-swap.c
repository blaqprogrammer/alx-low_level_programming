#include "main.h"

/**
 *swap_int - The entry of the program
 *@a: first integer
 *@b: Secomd integer.
 *Return: Swaps two integers.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
