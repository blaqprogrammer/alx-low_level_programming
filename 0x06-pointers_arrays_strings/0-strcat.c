#include "main.h"

/**
 * _strcat - entry mode
 * @dest: first integer
 * @src: second integer
 * Return: a string
 */

char *_strcat(char *dest, char *src)
{
	int can = 0, can1 = 0;
	while (*(dest + can)!='\0')
	{
		can++;
	}
	while (can1 >= 0)
	{
		*(dest + can) = *(src + can1);
		if (*(src + can1) == '\0')
			break;
		can++;
		can1++;
	}
	return (dest);
}
