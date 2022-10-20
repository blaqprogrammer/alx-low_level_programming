#include "main.h"

/**
 * _isdigit - This is the entry point.
 * @c: Holds the data
 * Return: Returns 1 or 0
 */




int _isdigit(int c)
{
	int d;

	for (d = 1; d <= 9;)
	{
	if (c == d)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
}
