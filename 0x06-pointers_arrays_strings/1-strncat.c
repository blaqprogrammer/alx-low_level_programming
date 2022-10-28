#include "main.h"

/**
 * _strcat - entry mode
 * @dest: first integer
 * @src: second integer
 * @n: number of int.
 * Return: a string
 */

char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
