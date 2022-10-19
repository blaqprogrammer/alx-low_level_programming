#include "main.h"

/**
 * _isalpha- Entry point
 *
 *@c: is the char representing the lowercase.
 * Return: 1 if char is lowercase, otherwise 0
 */




int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
