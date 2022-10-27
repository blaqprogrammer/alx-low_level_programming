#include "main.h"

/**
 * _strcat - entry mode
 * @dest: first integer
 * @src: second integer
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	*_strcat(*dest, *src);
	return (*dest);
}
