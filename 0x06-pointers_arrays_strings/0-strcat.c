#include "main.h"

/**
 * _strcat - entry mode
 * @dest: first integer
 * @src: second integer
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	dest = "Hello";
	src = "World";

	_strcat("%s\n", dest, src);
	return (0);
}
