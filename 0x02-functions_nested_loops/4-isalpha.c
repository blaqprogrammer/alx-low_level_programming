#include "main.h"

/**
 * _isalpha- Entry point
 *
 *@c: is the char representing the lowercase.
 * Return: 1 if char is lowercase, otherwise 0
 */




int _isalpha(int c, int b)
{
	if (b >= 'A' && b <= 'Z')
	{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
	}
}
