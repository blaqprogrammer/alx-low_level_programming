#include "main.h"

/**
 * _strcat - entry mode
 * @dest: first integer
 * @src: second integer
 * Return: a string
 */

char *_strcat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
