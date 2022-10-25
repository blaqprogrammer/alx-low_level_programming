#include "main.h"

/**
 *reset_to_98 - This is the entry point
 *@n: The var of int.
 *Return: it will retun a new pointer value.
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar("%d", *n);
}

