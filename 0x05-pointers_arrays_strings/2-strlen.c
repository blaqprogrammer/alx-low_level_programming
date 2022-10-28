#include "main.h"
#include <string.h>

/**
 *_strlen - The entry point
 *@s: The main int
 *Return: Returns the lenght of a string.
 */

int _strlen(char *s)
{
	char i[] = "My first strlen";
	int lenght;

	lenght = _strlen(i);
	_putchar(lenght);
}
