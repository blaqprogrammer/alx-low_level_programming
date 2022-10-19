#include "main.h"

/**
 *_abs- The entry point
 *@a: the parameter
 *Return: the absolute value.
 *
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
