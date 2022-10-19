#include "main.h"

/**
 * _islower- Entry point
 *
 *@c: is the char representing the lowercase.
 * Return: 1 if char is lowercase, otherwise 0
 */




int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
