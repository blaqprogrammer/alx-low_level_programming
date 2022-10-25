#include "main.h"
#include <string.h>

/**
 *_strlen - The entry point
 *@s: The main int
 *Return: Returns the lenght of a string.
 */

int _strlen(char *s)
{
	s = "Letters";
	_putchar("%zu", _strlen(s));
	return(0);
}
